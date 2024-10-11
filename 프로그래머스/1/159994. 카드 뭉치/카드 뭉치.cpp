#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    
    int cards1_idx = 0;
    int cards2_idx = 0;
    
    for (int i = 0; i < goal.size(); ++i)
    {
        if (cards1_idx < cards1.size() && cards1[cards1_idx] == goal[i])
        {
            ++cards1_idx;
        }
        else if (cards2_idx < cards2.size() && cards2[cards2_idx] == goal[i])
        {
            ++cards2_idx;
        }
        else
        {
            return "No";
        }
    }
    
    
    return "Yes";
}