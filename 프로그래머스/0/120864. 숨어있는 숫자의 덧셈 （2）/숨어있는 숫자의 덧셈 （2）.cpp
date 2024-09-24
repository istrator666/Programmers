#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    
    for (int i = 0; i < my_string.size(); i++)
    {
        if ('0' <= my_string[i] && '9' >= my_string[i])
        {
            num = num * 10 + (my_string[i] -'0');
        }
        else
        {
            answer += num;
            num = 0;
        }
    }
    
    answer += num;
    
    return answer;
}