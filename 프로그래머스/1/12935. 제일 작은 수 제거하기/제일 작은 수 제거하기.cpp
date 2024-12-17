#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];

    if (arr.size() == 1)
    {
        answer.push_back(-1);
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == min)
        {
            continue;
        }
        else
        {
            answer.push_back(arr[i]);
        }
    }
    
    
    return answer;
}