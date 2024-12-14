#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long root_n = sqrt(n);
    
    if (root_n * root_n == n)
    {
        answer = (root_n + 1) * (root_n + 1);
    }
    
    return answer;
}