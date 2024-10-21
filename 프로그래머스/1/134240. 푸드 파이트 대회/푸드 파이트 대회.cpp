#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string left = "";
    
    for (int i = 0; i < food.size(); ++i)
    {
        int half = food[i] / 2;
        left += string(half, '0' + i);
    }
    
    string right = left;
    reverse(right.begin(), right.end());
    
    
    return left + '0' + right;
}