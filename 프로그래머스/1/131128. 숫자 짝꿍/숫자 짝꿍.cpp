#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);
    
    for (auto c : X)
    {
        countX[c - '0']++;
    }
    
    for (auto c : Y)
    {
        countY[c - '0']++;
    }
    
    for (int i = 9; i >= 0; --i)
    {
        int min_count = min(countX[i], countY[i]);
        answer.append(min_count, '0' + i);
    }
    
    if (answer.empty())
    {
        return "-1";
    }
    
    if (answer[0] == '0')
    {
        return "0";
    }
    
    
    return answer;
}