#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> Check_Map;
    
    for (char c : s)
    {
        Check_Map[c]++;
    }
    
    for (auto& Check : Check_Map)
    {
        if (Check.second == 1)
        {
            answer += Check.first;
        }
    }
    
    sort(answer.begin(), answer.end());
    
    
    
    return answer;
}