#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int count_code = code - 1;
    
    for (int i = 0; i < cipher.size(); i++)
    {
        if (i == count_code)
        {
            answer += cipher[i];
            count_code += code;
        }
    }
    
    
    return answer;
}