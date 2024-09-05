#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); ++i)
    {
        int index_i = queries[i][0];
        int index_j = queries[i][1];
        
        int temp = arr[index_i];
        arr[index_i] = arr[index_j];
        arr[index_j] = temp;
        
    }
    return answer = arr;
}