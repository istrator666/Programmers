#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    
    for (int i = 0; i < ingredient.size(); ++i)
    {
        stack.push_back(ingredient[i]);
        
        if (stack.size() >= 4)
        {
            int len = stack.size();
            
            if (stack[len - 4] == 1 && stack[len - 3] == 2 && stack[len - 2] == 3 && stack[len - 1] == 1)
            {
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                
                answer++;
            }
        }    
    }
    
    
    return answer;
}