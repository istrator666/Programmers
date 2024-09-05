#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
    unordered_set<int> unset;

    for (int i : arr)
    {
        if (unset.find(i) == unset.end())
        {
            answer.push_back(i);
            unset.insert(i);
            if (answer.size() == k)
            {
                break;
            }
        }
    }
    
    while (answer.size() < k)
    {
        answer.push_back(-1);
    }
    
    return answer;
}