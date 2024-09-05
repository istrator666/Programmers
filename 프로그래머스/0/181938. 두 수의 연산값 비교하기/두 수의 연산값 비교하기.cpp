#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int dab = 2 * a * b;
    string s_ab = to_string(a) + to_string(b);
    int i_ab = stoi(s_ab);
    
    answer = (i_ab >= dab) ? i_ab : dab;
    
    
    return answer;
}