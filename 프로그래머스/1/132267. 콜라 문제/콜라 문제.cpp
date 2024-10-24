#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int n_count = n;
    
    while (n_count >= a)
    {
        int remain = (n_count / a) * b;
        answer += remain;
        n_count = (n_count % a) + (n_count / a) * b;
    }
    
    return answer + (n_count / a) * b;
}