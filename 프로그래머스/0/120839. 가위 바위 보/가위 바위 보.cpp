#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for (int i = 0; i < rsp.size(); ++i)
    {
        if ('2' == rsp[i])
        {
            answer += "0";
        }
        else if ('0' == rsp[i])
        {
            answer += "5";
        }
        else if ('5' == rsp[i])
        {
            answer += "2";
        }
    }
    
    return answer;
}