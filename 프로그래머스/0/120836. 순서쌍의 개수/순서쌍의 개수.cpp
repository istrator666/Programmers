#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            int j = n / i;
            
            if (i == j)
            {
                answer += 1;
            }
            else
            {
                answer += 2;
            }
        }
    }
    
    
    return answer;
}