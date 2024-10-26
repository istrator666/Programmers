#include <string>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    unordered_map<string, set<string>> report_id;
    unordered_map<string, int> report_count;

    for (const string& rep : report) 
    {
        int space_pos = rep.find(' ');
        string reporter = rep.substr(0, space_pos);
        string reported = rep.substr(space_pos + 1);

        if (report_id[reporter].find(reported) == report_id[reporter].end()) 
        {
            report_id[reporter].insert(reported);
            report_count[reported]++;
        }
    }

    unordered_map<string, int> mail_count;
    for (const string& id : id_list) 
    {
        if (report_count[id] >= k) 
        {
            for (const auto& reporter : report_id) 
            {
                if (reporter.second.find(id) != reporter.second.end()) 
                {
                    mail_count[reporter.first]++;
                }
            }
        }
    }

    for (size_t i = 0; i < id_list.size(); ++i) 
    {
        answer[i] = mail_count[id_list[i]];
    }

    return answer;
}