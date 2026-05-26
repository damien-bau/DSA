/*
Leetcode 1299
https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
*/

#include <vector>

using std::vector;

class Solution{
public:

    vector<int> replaceElements(vector<int>& arr) {
    
        int n = arr.size();
        int max = arr[n-1];

        for (int i=n-2; i>=0;i--){
            int tmp = arr[i];
            arr[i] = max;
            if (tmp > max){
                max = tmp;
            }
        }

        arr[n-1] = -1;

        return arr;
    }
};
