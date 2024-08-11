#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int maxi = 1;  // Initialize with 1 since the minimum sequence length can be 1
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;  // Skip duplicates
            } else if (nums[i] == nums[i - 1] + 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 1;  // Reset count for a new sequence
            }
        }
        
        return maxi;
    }
};
