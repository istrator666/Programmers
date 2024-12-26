#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    string harshad_x = to_string(x);
    int sum = 0;
    
    for (int i = 0; i < harshad_x.size(); ++i)
    {
        sum += harshad_x[i] - '0';
    }
    
    if (x % sum == 0)
    {
        answer = true;
    }
    
    return answer;
}