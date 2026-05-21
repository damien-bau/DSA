/*
Leetcode 485
https://leetcode.com/problems/max-consecutive-ones/description/
*/

#include <vector>
#include <algorithm>

using std::vector;
using std::max;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        
        int n = nums.size(), count = 0;
        int output=0;
        for (int i=0; i<n; i++){
            if (nums[i] == 1){
                count++;
            }
            else {
                output = max(output, count);
                count = 0;
            }
        }


        return max(output, count);
    }
};
