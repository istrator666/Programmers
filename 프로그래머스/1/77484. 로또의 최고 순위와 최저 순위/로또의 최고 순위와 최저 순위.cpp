#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2, 0);
    
    
    int rank[7] = {6, 6, 5, 4, 3, 2, 1};
    
    int min_count = 0;
    int max_count = 0;
    
    vector<int> sort_winNumber = win_nums;
    sort(sort_winNumber.begin(), sort_winNumber.end());
    
    for (auto lotto : lottos)
    {
        if (lotto == 0)
        {
            min_count += 1;
        }
        else
        {
            if (binary_search(sort_winNumber.begin(), sort_winNumber.end(), lotto))
            {
                max_count += 1;
            }
        }
    }
    
    max_count += min_count;
    min_count = max_count - min_count;
    
    if (max_count > 6)
    {
        max_count = 6;
    }
    
    if (min_count < 0)
    {
        min_count = 0;
    }
    
    answer[0] = rank[max_count];
    answer[1] = rank[min_count];
    
    return answer;
}