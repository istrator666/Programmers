#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    
    if (0 > dot[0] && 0 > dot[1])
    {
        answer = 3;
    }
    else if (0 > dot[0] && 0 < dot[1])
    {
        answer = 2;
    }
    else if (0 < dot[0] && 0 < dot[1])
    {
        answer = 1;
    }
    else
    {
        answer = 4;
    }
    
    
    return answer;
}