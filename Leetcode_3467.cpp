#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        // Function to transform the given array
        vector<int> transformArray(vector<int>& nums) {
            int j = 0; // Index to track position for replacing elements

            // Iterate through the array
            for (int i = 0; i < nums.size(); i++) {
                // If the element is even, replace it with 0
                if (nums[i] % 2 == 0) {
                    nums[j++] = 0;
                }
            }

            // Fill the remaining positions with 1
            while (j < nums.size()) {
                nums[j++] = 1;
            }

            return nums;
        }
};

int main() {
    Solution obj; // Create an instance of Solution class

    // Initialize input array
    vector<int> nums = {1, 2, 3, 4, 5};

    // Call the transformArray function
    vector<int> result = obj.transformArray(nums);

    // Print the transformed array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
