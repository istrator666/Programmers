#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    bool answer = true;
    
    for (char c : s)
    {
        if (s.size() == 4 || s.size() == 6)
        {
            if (c >= '0' && c <= '9')
            {
                answer = true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    
    return answer;
}