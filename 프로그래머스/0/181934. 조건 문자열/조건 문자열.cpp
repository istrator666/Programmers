#include <string>
#include <vector>

using namespace std;

int solution (string ineq, string eq, int n, int m) {
    int answer = 0;
    
    if (ineq == ">" && eq == "=")
    {
        answer = (n >= m) ? 1 : 0;
    }
    else if (ineq == "<" && eq == "!")
    {
        answer = (n > m) ? 1 : 0;
    }
    
    answer = ((ineq == ">" && eq == "=" && n >= m || ineq == "<" && eq == "=" && n <= m) 
              || (ineq == ">" && eq == "!" && n > m || ineq == "<" && eq == "!" && n < m)) ? 1 : 0;
    
    return answer;
}