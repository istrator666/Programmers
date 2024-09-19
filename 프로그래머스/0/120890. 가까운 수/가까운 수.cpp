#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int diff = abs(n - array[0]);

    for (int i = 1; i < array.size(); i++)
    {
        int current_diff = abs(n - array[i]);

        if (current_diff < diff || (current_diff == diff && array[i] < answer)) 
        {
            diff = current_diff;
            answer = array[i];
        }
    }
    
    
    
    return answer;
}