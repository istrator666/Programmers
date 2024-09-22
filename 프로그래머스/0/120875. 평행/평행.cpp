#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int dy1 = dots[1][1] - dots[0][1];
    int dx1 = dots[1][0] - dots[0][0];
    int dy2 = dots[3][1] - dots[2][1];
    int dx2 = dots[3][0] - dots[2][0];
    
    if(dy1 * dx2 == dy2 * dx1)
    {
        return 1;
    }

    dy1 = dots[2][1] - dots[0][1];
    dx1 = dots[2][0] - dots[0][0];
    dy2 = dots[3][1] - dots[1][1];
    dx2 = dots[3][0] - dots[1][0];
    if(dy1 * dx2 == dy2 * dx1)
    {
        return 1;
    }

    dy1 = dots[3][1] - dots[0][1];
    dx1 = dots[3][0] - dots[0][0];
    dy2 = dots[2][1] - dots[1][1];
    dx2 = dots[2][0] - dots[1][0];
    if(dy1 * dx2 == dy2 * dx1)
    {
        return 1;
    }

    return 0;
}