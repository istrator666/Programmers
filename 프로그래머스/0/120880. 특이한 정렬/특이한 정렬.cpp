#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end(), [&](const int a, const int b) -> bool
         {
             int diff_a = abs(a - n);
             int diff_b = abs(b - n);
             
             if (diff_a != diff_b)
             {
                 return diff_a < diff_b;
             }
             
             return a > b;
         });
    
    
    
    return numlist;
}