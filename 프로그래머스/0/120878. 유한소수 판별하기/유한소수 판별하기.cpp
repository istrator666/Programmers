#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    while (b % 2 == 0)
    {
        b /= 2;
    }
    
    while (b % 5 == 0)
    {
        b /= 5;
    }
    
    if (a % b == 0)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    
    
    return answer;
}