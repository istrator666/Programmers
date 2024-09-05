#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string s_ab = to_string(a) + to_string(b);
    string s_ba = to_string(b) + to_string(a);
    
    int i_ab = stoi(s_ab);
    int i_ba = stoi(s_ba);
    
    answer = (i_ab > i_ba) ? i_ab : i_ba;
    
    
    
    return answer;
}