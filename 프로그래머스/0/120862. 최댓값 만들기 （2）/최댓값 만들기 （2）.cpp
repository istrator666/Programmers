#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -100000001;
    int mul = 0;
    
    for (int i = 0; i  < numbers.size(); ++i)
    {
        for (int j = i+1; j < numbers.size(); ++j)
        {
            mul = numbers[i] * numbers[j];
            
            if (mul > answer)
            {
                answer = mul;
            }
        }
    }
    
    return answer;
}