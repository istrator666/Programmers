#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";

    
   for (int i = 0; i < my_string.size(); i++)
   {
       for(int j = 0; j < indices.size(); j++)
       {
           if(i == indices[j])
           {
               break;
           }
          if (j == indices.size() - 1)
          {
              answer += my_string[i];
          }
       }
   }
    
    
    return answer;
}