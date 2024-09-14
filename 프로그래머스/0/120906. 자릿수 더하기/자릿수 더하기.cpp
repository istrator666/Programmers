#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string istr = to_string(n);
    
    for (int i = 0; i < istr.size(); i++)
    {
        answer += istr[i] - '0';
    }
    
    return answer;
}