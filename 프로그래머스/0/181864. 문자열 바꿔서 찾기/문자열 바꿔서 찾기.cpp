#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i = 0; i < myString.size(); i++)
    {
        if ('A' == myString[i])
        {
            myString[i] = 'B';
        }
        else if ('B' == myString[i])
        {
            myString[i] = 'A';
        }
    }
    
    if(myString.find(pat) != string::npos)
    {
        return answer = 1;
    }
    
    
    return answer;
}