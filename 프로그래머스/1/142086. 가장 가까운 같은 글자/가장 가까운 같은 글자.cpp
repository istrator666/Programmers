#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> count_s;
    
    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        
        if (count_s.find(c) == count_s.end())
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - count_s[c]);
        }
        
        count_s[c] = i;
    }
    
    return answer;
}