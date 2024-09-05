#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    bool check = false;
    
    for (int i = 0; i < n_str.size(); i++)
    {
        if ('0' == n_str[i] && false == check)
        {
            continue;
        }
        else
        {
            check = true;
            answer += n_str[i];
        }
    }
    
    return answer;
}