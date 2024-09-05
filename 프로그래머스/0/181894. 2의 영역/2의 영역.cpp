#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min, max;
    bool check = false;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (2 == arr[i])
        {
            if (false == check)
            {
                min = i;
                check = true;
            }
            
            max = i;
        }
    }
    
    if (false == check)
    {
        answer.push_back(-1);
        return answer;
    }
    
    for (int i = min; i <= max; i++)
    {
        answer.push_back(arr[i]);
    }
    
    
    
    return answer;
}