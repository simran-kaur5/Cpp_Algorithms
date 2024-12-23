#include<iostream>
#include<vector>
using namespace std;

// Class to encapsulate the solution
class Solution {
public:
    // Function to search for a target in a rotated sorted array
    int search(vector<int>& nums, int target) {
        int st = 0; // Start pointer
        int end = nums.size() - 1; // End pointer
        int mid; // Variable to store the middle index

        // Binary search loop
        while (st <= end) {
            mid = st + (end - st) / 2; // Calculate mid to avoid integer overflow

            // If target is found at mid, return the index
            if (nums[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (nums[st] <= nums[mid]) {
                // If the target lies within the sorted left half
                if (nums[st] <= target && target <= nums[mid]) {
                    end = mid - 1; // Narrow the search to the left half
                }
                // Otherwise, search in the right half
                else {
                    st = mid + 1;
                }
            }
            // Else, the right half is sorted
            else {
                // If the target lies within the sorted right half
                if (nums[mid] <= target && target <= nums[end]) {
                    st = mid + 1; // Narrow the search to the right half
                }
                // Otherwise, search in the left half
                else {
                    end = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution s; // Create an instance of the Solution class
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Input rotated sorted array
    int target = 0; // Target value to search for
    cout << s.search(nums, target); // Call the search function and print the result
    return 0; // End of program
}
