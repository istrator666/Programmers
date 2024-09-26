#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int result = 1;
    
    while(true)
    {
        if (answer * (result + 1) > n)
        {
            break;
        }
        
        ++result;
        answer *= result;
    }
    
    
    return result;
}