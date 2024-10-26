#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> score_map;
    score_map['R'] = 0; score_map['T'] = 0;
    score_map['C'] = 0; score_map['F'] = 0;
    score_map['J'] = 0; score_map['M'] = 0;
    score_map['A'] = 0; score_map['N'] = 0;
    vector<int> get_point = {3, 2, 1, 0, 1, 2, 3};
    
    for (int i = 0; i < survey.size(); ++i)
    {
        string s = survey[i];
        int choice = choices[i];
        
        if (4 > choice)
        {
            score_map[s[0]] += get_point[choice - 1];
        }
        else if (4 < choice)
        {
            score_map[s[1]] += get_point[choice - 1];
        }
    }
    
    answer += (score_map['R'] >= score_map['T']) ? 'R' : 'T';
    answer += (score_map['C'] >= score_map['F']) ? 'C' : 'F';
    answer += (score_map['J'] >= score_map['M']) ? 'J' : 'M';
    answer += (score_map['A'] >= score_map['N']) ? 'A' : 'N';
    
    return answer;
}