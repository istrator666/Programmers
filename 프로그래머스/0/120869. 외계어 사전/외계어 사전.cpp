#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    string sum_spell;
    
    for (int i = 0; i < spell.size(); i++)
    {
        sum_spell += spell[i];
    }
    
    sort(sum_spell.begin(), sum_spell.end());
    
    for (int i = 0; i < dic.size(); i++)
    {
        if (sum_spell.size() != dic[i].size())
        {
            continue;
        }
        
        string sort_dic = dic[i];
        sort(sort_dic.begin(), sort_dic.end());
        
        if (sum_spell == sort_dic)
        {
            return answer = 1;
        }
    }
      
    return answer = 2;
}