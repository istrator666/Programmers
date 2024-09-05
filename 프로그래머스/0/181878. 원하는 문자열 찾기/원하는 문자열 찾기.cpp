#include <string>
#include <vector>
#include <cstring>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for (int i =0; i < myString.size(); i++)
    {
        if ('A' <= myString[i] && 'Z' >= myString[i])
        {
            myString[i] = tolower(myString[i]);
        }
    }
    
        for (int i =0; i < pat.size(); i++)
    {
        if ('A' <= pat[i] && 'Z' >= pat[i])
        {
            pat[i] = tolower(pat[i]);
        }
    }
    
    if (myString.size() >= pat.size())
    {
        const char* found = strstr(myString.c_str(), pat.c_str());
        if (found != nullptr) 
        {
            answer = 1;
        }
    }
    
    return answer;
}