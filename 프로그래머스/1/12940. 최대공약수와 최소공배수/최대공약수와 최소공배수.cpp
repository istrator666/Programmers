#include <string>
#include <vector>

using namespace std;

int gcd_func(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int v_gcd = gcd_func(n, m);
    int v_lcm = (n / v_gcd) * m;
    
    answer.push_back(v_gcd);
    answer.push_back(v_lcm);
    
    return answer;
}