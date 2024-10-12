#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<int> parseDate(const string& _strDate)
{
    vector<int> dateParts;
    stringstream ss(_strDate);
    string Part;
    
    while(getline(ss, Part, '.'))
    {
        dateParts.push_back(stoi(Part));
    }
    
    return dateParts;
}

long long convertToTotalDays(int year, int month, int day)
{
    return static_cast<long long>(year) * 12 * 28 + static_cast<long long>(month) * 28 + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<string, int> termMap;
    
    for (const string& term : terms)
    {
        stringstream ss(term);
        string termType;
        int duration;
        ss >> termType >> duration;
        termMap[termType] = duration;
    }
    
    vector<int> todayDate = parseDate(today);
    long long totaltoday = convertToTotalDays(todayDate[0], todayDate[1], todayDate[2]);
    
    for (int i = 0; i < privacies.size(); ++i)
    {
        stringstream ss(privacies[i]);
        string collectionDateStr, termType;
        ss >> collectionDateStr >> termType;
        
        vector<int> collectionDate = parseDate(collectionDateStr);
        long long collectionTotal = convertToTotalDays(collectionDate[0], collectionDate[1], collectionDate[2]);
        
        int duration = termMap[termType];
        
        int endYear = collectionDate[0];
        int endMonth = collectionDate[1] + duration;
        int endDay = collectionDate[2];
        
        while(endMonth > 12)
        {
            endYear += 1;
            endMonth -= 12;
        }
        
        long long endTotal = convertToTotalDays(endYear, endMonth, endDay) - 1;
        
        if (totaltoday > endTotal)
        {
            answer.push_back(i + 1);
        }
    }
    
    
    return answer;
}