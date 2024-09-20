#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int max_side = sides[0];
    
    if (max_side < sides[1])
    {
        max_side = sides[1];
    }
    if (max_side < sides[2])
    {
        max_side = sides[2];
    }
    
        
    int num_tri = sides[0] + sides[1] + sides[2] - max_side;
    
    if (max_side >= num_tri)
    {
        return 2;
    }
    else
    {
        return 1;
    }
    
    return 0;
}