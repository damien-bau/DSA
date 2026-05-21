/*
Leetcode 27
https://leetcode.com/problems/remove-element/description/
*/

#include <vector>

using std::vector;

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        
        int l = 0;
        for (int r=0; r<nums.size(); r++){
            if (nums[r] != val){
                nums[l] = nums[r];
                l++;
            }
        }

        nums.erase(nums.begin()+l, nums.end());

        return l;
    }
};
