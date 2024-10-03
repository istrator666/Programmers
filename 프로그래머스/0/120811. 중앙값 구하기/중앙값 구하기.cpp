#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int center = 0;
    
    sort(array.begin(), array.end());
    
    center = (array.size() / 2);
    answer = array[center];
    
    return answer;
}