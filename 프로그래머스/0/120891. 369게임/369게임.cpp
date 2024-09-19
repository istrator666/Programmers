#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string s_order = to_string(order);
    
    for (int i = 0; i < s_order.size(); i++)
    {
        if ('3' == s_order[i] || '6' == s_order[i] || '9' == s_order[i])
        {
            ++answer;
        }
    }
    
    return answer;
}