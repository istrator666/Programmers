#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> prelist = vector<int>(num_list.begin(), num_list.begin() + n);
    vector<int> endlist = vector<int>(num_list.begin() + n, num_list.end());
    
    answer = endlist;
    
    answer.insert(answer.end(), prelist.begin(), prelist.end());    
    
    return answer;
}