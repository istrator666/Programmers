#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int count_k = 0;
    int number = 0;
    
    
    while(count_k < k)
    {
        answer = numbers[number];
        number = (number + 2) % numbers.size();
        
        ++count_k;
    }
    
    return answer;
}