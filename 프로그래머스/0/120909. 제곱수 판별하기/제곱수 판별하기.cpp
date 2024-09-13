#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sqrtn = static_cast<int>(sqrt(n));
    
    if (sqrtn * sqrtn == n)
    {
        return answer = 1;
    }
    else
    {
        return answer = 2;
    }
    
    
    return answer;
}