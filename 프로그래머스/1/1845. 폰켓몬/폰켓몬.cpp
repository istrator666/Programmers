#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> nums_set(nums.begin(), nums.end());
    
    answer = nums.size() / 2;
    
    return min((int)nums_set.size(), answer);
}