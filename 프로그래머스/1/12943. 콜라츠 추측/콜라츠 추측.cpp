#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long long_num = num;
    
    while(long_num != 1 && answer < 500)
    {
        if (long_num % 2 == 0)
        {
            long_num /= 2;
        }
        else
        {
            long_num = long_num * 3 + 1;
        }
        
        ++answer;
    }
    
    if (long_num == 1)
    {
        return answer;
    }
    else
    {
        return -1;
    }
}