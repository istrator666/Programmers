#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    
    for(int i = 0; i < myString.size(); i++)
    {
        if ('x' == myString[i])
        {
            answer.push_back(count);
            count = 0;
        }
        else
        {
           ++count;
        }
    }
    
    if(!myString.empty())
    {
        answer.push_back(count);
    }
    
    return answer;
}