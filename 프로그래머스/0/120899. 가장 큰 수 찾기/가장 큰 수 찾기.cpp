#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int index = 0, max = -1;
    
    for (int i = 0; i < array.size(); i++)
    {
        if (max == -1)
        {
            max = array[i];
            index = i;
        }
        else if (max <= array[i])
        {
            max = array[i];
            index = i;
        }
    }
    
    answer.push_back(max);
    answer.push_back(index);
    
    return answer;
}