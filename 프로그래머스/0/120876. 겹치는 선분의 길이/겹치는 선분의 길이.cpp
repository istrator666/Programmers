#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int freq[201] = {0};

    for(int i = 0; i < lines.size(); ++i){
        int start = lines[i][0];
        int end = lines[i][1];
        
        for(int x = start; x < end; ++x){
            freq[x + 100] += 1;
        }
    }

    for(int i = 0; i < 201; ++i){
        if(freq[i] >= 2){
            answer++;
        }
    }

    return answer;
}