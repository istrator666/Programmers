#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int idx = 1;
    
    while(idx < arr.size())
    {
        idx *= 2;
    }
    
    vector<int> answer(idx, 0);
    
    for (int i = 0; i < arr.size(); i++)
    {
        answer[i] = arr[i];
    }
    
    return answer;
}