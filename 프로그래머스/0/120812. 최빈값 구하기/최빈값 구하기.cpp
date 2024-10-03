#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> Check_array(1000, 0);
    
    for (int i = 0; i < array.size(); ++i)
    {
        Check_array[array[i]]++; 
    }
    
    int max = 0;
    
    for (int i = 0; i < Check_array.size(); ++i)
    {
        if (Check_array[i] > max)
        {
            max = Check_array[i];
        }
    }
    
    
    int count = 0;
    
    for (int i = 0; i < Check_array.size(); ++i)
    {
        if (Check_array[i] == max)
        {
            ++count;
            answer = i;
            
            if (count > 1)
            {
                answer = -1;
                break;
            }
        }
    }
    
    return answer;
}