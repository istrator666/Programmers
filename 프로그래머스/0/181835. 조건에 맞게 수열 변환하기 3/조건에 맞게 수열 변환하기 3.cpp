#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++)
    {
        int result = 0;
        
        if (k % 2 == 0)
        {
            result = arr[i] + k;
            answer.push_back(result);
        }
        else
        {
            result = arr[i] * k;
            answer.push_back(result);
        }
    }
    
    return answer;
}