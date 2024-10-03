#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    while (n > 7)
    {
        n -= 7;
        ++answer;
    }
    
    return answer;
}