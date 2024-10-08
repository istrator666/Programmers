#include <string>
#include <vector>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    
    for (int i = 0; i < park.size(); ++i)
    {
        for (int j = 0; j < park[i].size(); ++j)
        {
            if (park[i][j] == "-1")
            {
                for (int k = 0; k < mats.size(); ++k)
                {
                    bool Canmat = true;
                    
                    if (i + mats[k] > park.size() || j + mats[k] > park[i].size())
                    {
                        continue;
                    }
                    
                    for (int x = i; x < i + mats[k]; ++x)
                    {
                        for (int y = j; y < j + mats[k]; ++y)
                        {
                            if (park[x][y] != "-1")
                            {
                                Canmat = false;
                                break;
                            }
                        }
                        
                        if (!Canmat)
                        {
                            break;
                        }
                    }
                    
                    if (Canmat && mats[k] > answer)
                    {
                        answer = mats[k];
                    }
                }
            }
        }
    }
    
    return answer;
}