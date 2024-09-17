#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    char cnum1 = my_string[num1];
    char cnum2 = my_string[num2];
    
    my_string[num1] = cnum2;
    my_string[num2] = cnum1;
    
    answer = my_string;
    
    return answer;
}