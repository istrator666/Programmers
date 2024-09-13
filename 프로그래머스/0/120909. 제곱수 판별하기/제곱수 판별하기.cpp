#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            return answer = 1;
        }
    }
    
    return answer = 2;
}