#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;

    for (int i = 0; i < picture.size(); i++)
    {
        string row = "";
        for (int j = 0; j < picture[i].size(); j++)
        {
            for (int l = 0; l < k; l++)
            {
                row += picture[i][j];
            }
        }

        for (int m = 0; m < k; m++)
        {
            answer.push_back(row);
        }
    }


    return answer;
}