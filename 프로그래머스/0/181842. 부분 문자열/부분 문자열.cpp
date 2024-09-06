#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int sfind = str2.find(str1);
    
    if (sfind != string::npos)
    {
        return answer = 1;
    }
    
    return answer;
}