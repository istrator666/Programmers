#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int min_side = abs(sides[0] - sides[1]) +1;
    int max_side = abs(sides[0] + sides[1]);
    
    
    for (int i = min_side; i < max_side; i++)
    {
        ++answer;
    }
    
    return answer;
}