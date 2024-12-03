// Copy only the CLASS block to submit code on Leetcode !!

#include <iostream>
#include <vector>
using namespace std;

// Solution class containing the removeElement function
class Solution {
public:
    // Function to remove all instances of a given value (val) from the vector (nums)
    int removeElement(vector<int>& nums, int val) {
        vector<int> res; // Temporary vector to store elements not equal to val
        
        // Iterate through the nums vector
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is not equal to val, add it to res
            if (nums.at(i) != val) {
                res.push_back(nums.at(i));
            }
        }

        // Clear the original vector to remove all its elements
        nums.clear();

        // Copy all elements from the temporary vector (res) back to nums
        for (int value : res) {
            nums.push_back(value);
        }

        // Get the size of the modified nums vector
        int k = nums.size();
        return k; // Return the size of nums after removing elements
    }
};

int main() {
    Solution s; // Create an instance of the Solution class
    int val;    // Variable to store the value to be removed
    vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2}; // Input vector

    // Prompt the user to enter the element to remove
    cout << "Enter element to remove" << endl;
    cin >> val;

    // Call the removeElement function and print the resulting size of the array
    cout << "Size of the array without duplicates is " << s.removeElement(nums, val);
    
    return 0; // End the program
}
