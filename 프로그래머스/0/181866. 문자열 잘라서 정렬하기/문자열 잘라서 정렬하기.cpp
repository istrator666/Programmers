#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string my_String;
    
    for(int i = 0; i < myString.size(); i++)
    {
        if ('x' == myString[i])
        {
            if (!my_String.empty())
            {
                answer.push_back(my_String);
                my_String.clear();
            }
        }
        else
        {
            my_String.push_back(myString[i]);
        }
    }
    
    if (!my_String.empty())
    {
        answer.push_back(my_String);
    }
        sort(answer.begin(), answer.end());
    
    
    return answer;
}