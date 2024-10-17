#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; ++i)
    {
        int measure = 0;
            
        for (int j = 1; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                ++measure;
                
                if (j != i / j)
                {
                    ++measure;
                }
            }
        }
        
        if (measure > limit)
        {
            measure = power;
        }
        
        answer += measure;
    }
    
    
    return answer;
}