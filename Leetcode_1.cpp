// Copy only the CLASS block to sumbit code on Leetcode !!

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // Map number -> index
        vector<int> ans;              // Vector to store the answer indices

        for (int i = 0; i < nums.size(); i++) {

            if (m.find(target - nums[i]) != m.end()) {
                ans.push_back(m[target - nums[i]]); // index of target - nums
                ans.push_back(i);                 // current index
                return ans;                      // return the vector
            }

            m[nums[i]] = i;
        }
        
        return ans; // will be empty if no solution found
    }
};

int main() {
    Solution sol;
    //You test more cases by changing inputs
    // Simple test case 
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
