#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream sstr(my_string);
    int num;
    char op = '+';
    
    while (sstr >> num)
    {
        if (op == '+')
        {
            answer += num;
        }
        else if (op == '-')
        {
            answer -= num;
        } 
        
        sstr >> op;
    }
    
    return answer;
}