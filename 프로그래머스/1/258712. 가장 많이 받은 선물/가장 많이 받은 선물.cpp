#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int n = friends.size();
    unordered_map<string, int> friends_to_index;
    for(int i = 0; i < n; ++i){
        friends_to_index[friends[i]] = i;
    }

    vector<vector<int>> g(n, vector<int>(n, 0));
    vector<int> give(n, 0);
    vector<int> receive(n, 0);

    for(const string& gift : gifts){
        int space_pos = gift.find(' ');
        
        string giver = gift.substr(0, space_pos);
        string receiver = gift.substr(space_pos + 1);
        
        int giver_idx = friends_to_index[giver];
        int receiver_idx = friends_to_index[receiver];
        
        g[giver_idx][receiver_idx]++;
        give[giver_idx]++;
        receive[receiver_idx]++;
    }

    vector<int> gift_index(n, 0);
    for(int i = 0; i < n; ++i){
        gift_index[i] = give[i] - receive[i];
    }

    vector<int> next_month_gifts(n, 0);

    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(g[i][j] > g[j][i]){
                next_month_gifts[i]++;
            }
            else if(g[i][j] < g[j][i]){
                next_month_gifts[j]++;
            }
            else {
                if(gift_index[i] > gift_index[j]){
                    next_month_gifts[i]++;
                }
                else if(gift_index[i] < gift_index[j]){
                    next_month_gifts[j]++;
                }
            }
        }
    }

    if(next_month_gifts.empty()) return 0;
    return *max_element(next_month_gifts.begin(), next_month_gifts.end());
}