#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> v_sort;
    string s = to_string(n);
    int mul = 1;
    
    for (int i = 0; i < s.size(); ++i)
    {
        v_sort.push_back(s[i] - '0');
    }
    
    sort(v_sort.begin(), v_sort.end());
    
    for (int i = 0; i < v_sort.size(); ++i)
    {
        answer += v_sort[i] * mul;
        mul *= 10;
    }
    
    return answer;
}