#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    int s = my_string.size() - n;
    
    for (int i = 0; i < n; i++)
    {
        answer += my_string[s+i];
    }
    
    return answer;
}