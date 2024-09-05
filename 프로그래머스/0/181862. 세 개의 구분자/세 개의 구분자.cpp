#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string myString;
    
    for (int i = 0; i < myStr.size(); i++)
    {
        if ('a' == myStr[i] || 'b' == myStr[i] || 'c' == myStr[i])
        {
            if (!myString.empty())
            {
                answer.push_back(myString);
                myString.clear();
            }
        }
        else
        {
            myString.push_back(myStr[i]);
        }
    }
    
    if (!myString.empty())
    {
        answer.push_back(myString);
    }
    else
    {
        answer.push_back("EMPTY");
    }
    
    return answer;
}