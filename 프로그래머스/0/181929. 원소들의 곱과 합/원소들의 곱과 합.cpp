#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int num = 0;
    int mul = 1;
    
    for(int i = 0; i < num_list.size(); ++i)
    {
        num += num_list[i];
        mul *= num_list[i];
        
        answer = mul > (num * num) ? 0 : 1;
    }
    
    return answer;
}