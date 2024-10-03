#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    
    while (n >= slice)
    {
        ++answer;
        n -= slice;
    }
    
    if ( n > 0 )
    {
        ++answer;
    }
    
    return answer;
}