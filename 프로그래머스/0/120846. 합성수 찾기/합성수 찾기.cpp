#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 4; i <= n; ++i)
    {
        bool isComposite = false;
        
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isComposite = true;
                break;
            }
        }
        
        if (isComposite)
        {
            ++answer;
        }
    }
    
    return answer;
}