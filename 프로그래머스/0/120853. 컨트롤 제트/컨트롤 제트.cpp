#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string str;
    int prev = 0;
    
    while(ss >> str)
    {
        if ("Z" != str)
        {
            answer += stoi(str);
            prev = stoi(str);
        }
        else
        {
            answer -= prev;
        }
    }
    
    
    return answer;
}