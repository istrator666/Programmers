#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if (arr1.size() < arr2.size())
    {
        answer = -1;
    }
    else
    {
        answer = 1;
    }
    
    if (arr1.size() == arr2.size())
    {
        int a1 = 0;
        int a2 = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            a1 += arr1[i];
        }
        
        for (int i = 0; i < arr2.size(); i++)
        {
            a2 += arr2[i];
        }
        
        if (a1 < a2)
        {
            answer = -1;
        }
        else if(a1 > a2)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    
    
    return answer;
}