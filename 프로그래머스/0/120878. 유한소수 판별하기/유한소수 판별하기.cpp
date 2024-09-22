#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int gdc_val = __gcd(a,b);
    int reduce_denominator = b / gdc_val;
    
    while(reduce_denominator % 2 == 0)
    {
        reduce_denominator /= 2;
    }
    
    while(reduce_denominator % 5 == 0)
    {
        reduce_denominator /= 5;
    }
    
    if (reduce_denominator == 1)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    
    return answer;
}