#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int left, right = 0;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2 == 0)
        {
            left += num_list[i];
        }
        else
        {
            right += num_list[i];
        }
    }
    
    if (left >= right)
    {
        answer = left;
    }
    else
    {
        answer = right;
    }
    
    
    return answer;
}