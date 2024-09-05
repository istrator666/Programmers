#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (int i = 0; i < myString.size(); i ++)
    {
        if ('a' == myString[i] || 'A' == myString[i])
        {
            myString[i] = toupper(myString[i]);
        }
        else
        {
            myString[i] = tolower(myString[i]);
        }
    }
    
    return answer = myString;
}