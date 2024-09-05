#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> Canrank;
    
    for (int i = 0; i < rank.size(); i++)
    {
        if (true == attendance[i])
        {
            Canrank.push_back({rank[i], i});
        }
    }

    sort(Canrank.begin(), Canrank.end());
    
    return answer = (10000 * Canrank[0].second + (100 * Canrank[1].second + Canrank[2].second));
}