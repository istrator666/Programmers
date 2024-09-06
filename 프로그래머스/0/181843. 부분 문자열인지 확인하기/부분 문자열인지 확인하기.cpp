#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    
    int sfind = my_string.find(target);
    if(sfind != string::npos)
    {
        answer = 1;
    }
    
    return answer;
}