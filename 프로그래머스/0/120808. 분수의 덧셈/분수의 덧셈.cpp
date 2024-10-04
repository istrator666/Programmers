#include <string>
#include <vector>
#include <functional>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    function<int(int, int)> gcd = [](int a, int b) -> int 
    {
        while(b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        return a;
    };
    
    int denom_gdc = gcd(denom1, denom2);
    int lcm = (denom1 * denom2) / denom_gdc;
    
    int new_numer1 = numer1 * (lcm / denom1);
    int new_numer2 = numer2 * (lcm / denom2);
    
    int sum_numer = new_numer1 + new_numer2;
    int sum_denom = gcd(sum_numer, lcm);
    
    int result_numer = sum_numer / sum_denom;
    int result_denom = lcm / sum_denom;
    
    answer.push_back(result_numer);
    answer.push_back(result_denom);
    
    return answer;
}