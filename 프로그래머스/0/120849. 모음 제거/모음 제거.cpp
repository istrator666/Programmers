#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string vowels = "aeiou";
    
    for (int i = 0; i < my_string.size(); ++i)
    {
        if ('a' == my_string[i] || 'e' == my_string[i] || 'i' == my_string[i]
           || 'o' == my_string[i] || 'u' == my_string[i])
        {
            continue;
        }
        else
        {
            answer += my_string[i];
        }
    }
    
    return answer;
}