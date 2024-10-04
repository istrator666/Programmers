#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double div = static_cast<double>(num1) / num2;
    
    answer = static_cast<int>(div * 1000);
    
    return answer;
}