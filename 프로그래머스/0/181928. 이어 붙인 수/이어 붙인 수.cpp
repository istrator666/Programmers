#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string hol = "";
    string jak = "";
    
    for (int i = 0; i < num_list.size(); ++i)
    {
        if(num_list[i] % 2 == 1)
        {
            hol += to_string(num_list[i]);
        }
        else if(num_list[i] % 2 == 0)
        {
            jak += to_string(num_list[i]);
        }
    }
    int hol_sum = stoi(hol);
    int jak_sum = stoi(jak);
    
    return answer = hol_sum + jak_sum;
}