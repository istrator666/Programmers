#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    
    int min_row = INT32_MAX;
    int min_col = INT32_MAX;
    int max_row = -1;
    int max_col = -1;
    
    for (int i = 0; i < wallpaper.size(); ++i)
    {
        for (int j = 0; j < wallpaper[i].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
            {
                if (i < min_row)
                {
                    min_row = i;
                }
                
                if (j < min_col)
                {
                    min_col = j;
                }
                
                if (i > max_row)
                {
                    max_row = i;
                }
                
                if (j > max_col)
                {
                    max_col = j;
                }
            }
        }
    }
    
    return {min_row, min_col, max_row + 1, max_col + 1};
}