#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr.size() % 2 == 1)
        {
            arr[i] += n;
            i++;
        }
        else
        {
            i++;
            arr[i] += n;
        }
    }
    
    return answer = arr;
}