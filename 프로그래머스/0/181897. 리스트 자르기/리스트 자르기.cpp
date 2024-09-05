#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    switch(n)
    {
        case 1:
            for (int i = 0; i <= static_cast<int>(slicer[1]); i++)
            {
                answer.push_back(static_cast<int>(num_list[i]));
            }
            break;
        case 2:
            for (int i = static_cast<int>(slicer[0]); i < num_list.size(); i++)
            {
                answer.push_back(static_cast<int>(num_list[i]));
            }
            break;
        case 3:
            for (int i = static_cast<int>(slicer[0]); i <= static_cast<int>(slicer[1]); i++)
            {
                answer.push_back(static_cast<int>(num_list[i]));
            }
            break;
        case 4:
            for (int i = static_cast<int>(slicer[0]); i <= static_cast<int>(slicer[1]); i++)
            {
                answer.push_back(static_cast<int>(num_list[i]));
                i += static_cast<int>(slicer[2]) - 1;
            }
            break;
    } 

    return answer;
}