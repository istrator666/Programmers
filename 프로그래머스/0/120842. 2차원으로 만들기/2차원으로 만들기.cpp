#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> list;
    int count = 0;
    
    for (int i = 0; i < num_list.size() / n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
           list.push_back(num_list[count]);
            ++count;
        }
        
        answer.push_back(list);
        list.clear();
    }
    
    return answer;
}