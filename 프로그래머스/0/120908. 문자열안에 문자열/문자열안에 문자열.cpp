#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    if (str1.find(str2) != string::npos)
    {
        return answer =  1;
    }
    
    
    return answer = 2;
}