#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for (int i=0; i < num_list.size(); i++)
    {
        if(0 > static_cast<int>(num_list[i]))
        {
            return answer = i;
        }
        else
        {
            answer = -1;
        }
    }
    
    return answer;
}