#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int i = 0; i < my_string.size(); i++)
    {
        if ('a' <= my_string[i] && 'z' >= my_string[i])
        {
            answer += toupper(my_string[i]);
        }
        else
        {
            answer += tolower(my_string[i]);
        }
    }
    
    return answer;
}