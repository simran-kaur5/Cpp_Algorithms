#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        // Function to move all zeroes to the end while maintaining the relative order of non-zero elements
        void moveZeroes(vector<int>& nums) {
            int n = nums.size(); // Get the size of the vector
            int j = 0; // Pointer to track the position for non-zero elements

            // Iterate through the array
            for(int i = 0; i < n; i++) {
                if(nums[i] == 0) {
                    continue; // Skip if the element is zero
                }
                else {
                    swap(nums[i], nums[j]); // Swap non-zero element with the element at position j
                    j++; // Move j to the next position
                }
            }
        }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12}; // Input vector

    s.moveZeroes(nums); // Call function to move zeroes

    // Print the modified array
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}
