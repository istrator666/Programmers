#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> canbabbling = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling.size(); i++)
    {
        string str = babbling[i];
        vector<string> Checkbabbling;

        for (int j = 0; j < canbabbling.size(); j++)
        {
            if (str.find(canbabbling[j]) != string::npos)
            {
                Checkbabbling.push_back(canbabbling[j]);
            }
        }

        for (int k = 0; k < Checkbabbling.size(); k++)
        {
            if (str.find(Checkbabbling[k]) != string::npos)
            {
                str.erase(str.find(Checkbabbling[k]), Checkbabbling[k].length());
            }

            if (str.empty())
            {
                ++answer;
                break;
            }
        }
    }

    return answer;
}