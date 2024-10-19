#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> genre_play_count;
    unordered_map<string, vector<pair<int, int>>> genre_songs;

    for (int i = 0; i < genres.size(); ++i) {
        genre_play_count[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({i, plays[i]});
    }

    vector<pair<string, int>> sorted_genres(genre_play_count.begin(), genre_play_count.end());
    sort(sorted_genres.begin(), sorted_genres.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    for (const auto& genre : sorted_genres) {
        string genre_name = genre.first;
        vector<pair<int, int>>& songs = genre_songs[genre_name];

        sort(songs.begin(), songs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second; 
        });

        for (int i = 0; i < min(2, (int)songs.size()); ++i) {
            answer.push_back(songs[i].first);
        }
    }

    return answer;
}