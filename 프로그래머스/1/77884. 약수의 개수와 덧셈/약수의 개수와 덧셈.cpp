#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i)
    {
        double sqrt_num = sqrt(static_cast<double>(i));
        
        if (static_cast<int>(sqrt_num) * static_cast<int>(sqrt_num) == i)
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }
    
    
    
    return answer;
}