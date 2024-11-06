#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> freq(N + 2, 0);
    
    for (auto stage : stages)
    {
        if (stage <= N +1)
        {
            freq[stage]++;
        }
    }
    
    int total_users = stages.size();
    vector<pair<int, double>> failrate;
    
    for (int i = 1; i <= N; ++i)
    {
        if (total_users > 0)
        {
            double stage_fail = static_cast<double>(freq[i]) / total_users;
            failrate.emplace_back(make_pair(i, stage_fail));
        }
        else
        {
            failrate.emplace_back(make_pair(i, 0.0));
        }
        
        total_users -= freq[i];
    }
    
    sort(failrate.begin(), failrate.end(), [&](const pair<int, double> &a, const pair<int, double> &b) -> bool 
    {
        if (a.second != b.second)
        {
            return a.second > b.second;
        }
        else
        {
            return a.first < b.first;
        }
    });
    
    for (auto & f : failrate)
    {
        answer.push_back(f.first);
    }
    
    return answer;
}