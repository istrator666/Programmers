#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> X_Coords;
    vector<int> Y_Coords;
    
    for (auto dot : dots)
    {
        X_Coords.push_back(dot[0]);
        Y_Coords.push_back(dot[1]);
    }
    
    sort(X_Coords.begin(), X_Coords.end());
    sort(Y_Coords.begin(), Y_Coords.end());
    
    answer = (X_Coords[0] - X_Coords[3]) * (Y_Coords[0] - Y_Coords[3]);
    
    return answer;
}