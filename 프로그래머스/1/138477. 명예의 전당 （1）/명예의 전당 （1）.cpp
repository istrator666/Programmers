#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> top_k;
    
    for (int i = 0; i < score.size(); ++i)
    {
        top_k.push_back(score[i]);
        
        if (top_k.size() > k)
        {
            sort(top_k.begin(), top_k.end(), greater<int>());
            top_k.pop_back();
        }
        
        int min_score = *min_element(top_k.begin(), top_k.end());
        
        answer.push_back(min_score);
    }
    
    return answer;
}