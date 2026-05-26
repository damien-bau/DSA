/*
Leetcode 682
https://leetcode.com/problems/baseball-game/
*/

#include <vector>
#include <string>
#include <numeric>

using std::vector;
using std::string;
using std::accumulate;

class Solution{
public:

     int calPoints(vector<string>& operations){
        
        int n = operations.size();
        vector<int> stack;

        for (int i=0; i<n; i++){
            if (operations[i] == "+"){
                int prev = stack.back();
                stack.pop_back();

                int sum = prev + stack.back();
                stack.push_back(prev);
                stack.push_back(sum);
            }
            else if (operations[i] == "D"){
                stack.push_back(2*stack.back());
            }
            else if (operations[i] == "C"){
                stack.pop_back();
            }
            else {
                stack.push_back(stoi(operations[i]));
            }
        }

        return accumulate(stack.begin(), stack.end(), 0);
    }
};
