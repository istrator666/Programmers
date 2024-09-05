#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    
    arr.erase(remove_if(arr.begin(), arr.end(), [&delete_list](int list)
                      {
                          return find(delete_list.begin(), delete_list.end(), list) != delete_list.end();
        
    }),
    arr.end());
    
    
    return arr;
}