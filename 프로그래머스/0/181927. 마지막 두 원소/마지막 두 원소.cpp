#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int end = answer.back();
    int prev_end = answer[answer.size() - 2];
    
    if(end > prev_end)
    {
        answer.push_back(end - prev_end);
    }
    else
    {
        answer.push_back(end * 2);
    }
    
    return answer;
}