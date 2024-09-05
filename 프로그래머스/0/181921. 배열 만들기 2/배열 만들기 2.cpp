#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; ++i)
    {
        string numStr = to_string(i);
        bool checkNum = true;
        for (char c : numStr)
        {
            if (c != '0' && c != '5')
            {
                checkNum = false;
                break;
            }
        }
        if(checkNum)
        {
            answer.push_back(i);
        }
    }
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}