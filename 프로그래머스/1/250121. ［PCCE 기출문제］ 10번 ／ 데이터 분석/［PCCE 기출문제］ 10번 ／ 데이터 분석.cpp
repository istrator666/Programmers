#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    int ext_idx = 0;
    if (ext == "code")
    {
        ext_idx = 0;
    }
    else if (ext == "date")
    {
        ext_idx = 1;
    }
    else if (ext == "maximum")
    {
        ext_idx = 2;
    }
    else if (ext == "remain")
    {
        ext_idx = 3;
    }
    
    int sort_idx = 0;
    if (sort_by == "code")
    {
        sort_idx = 0;
    }
    else if (sort_by == "date")
    {
        sort_idx = 1;
    }
    else if (sort_by == "maximum")
    {
        sort_idx = 2;
    }
    else if (sort_by == "remain")
    {
        sort_idx = 3;
    }
    
    for (int i = 0; i < data.size(); ++i)
    {
        if (data[i][ext_idx] < val_ext)
        {
            answer.push_back(data[i]);
        }
    }
    
    sort(answer.begin(), answer.end(), [&](const vector<int> &a, const vector<int> &b) -> bool{
        return a[sort_idx] < b[sort_idx];
    });
    
    
    return answer;
}