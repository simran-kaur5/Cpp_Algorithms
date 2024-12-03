// Copy only the CLASS block to submit code on Leetcode !!

#include<iostream> // Include the input-output library
#include<vector>   // Include the vector library for using the vector container
using namespace std;

// Define a class named Solution
class Solution {
public:
    // Function to remove duplicates from a sorted vector
    int removeDuplicates(vector<int>& nums) {
        vector<int> res; // Vector to store the result without duplicates

        // Loop through the input vector
        for(int i = 0; i < (nums.size() - 1); i++) {
            // Check if the current element is smaller than the next element
            if(nums.at(i) < nums.at(i + 1)) {
                res.push_back(nums.at(i)); // Add the current element to the result vector
            }
        }

        // Add the last element of the input vector to the result vector
        res.push_back(nums.back());

        // Clear the original input vector
        nums.clear();

        // Copy elements from the result vector back to the original vector
        for(int val : res) {
            nums.push_back(val);
        }

        // Calculate the size of the updated vector
        int k = nums.size();

        // Return the size of the vector
        return k;
    }
};

// Main function to execute the program
int main() {
    Solution s; // Create an object of the Solution class

    // Initialize a vector with duplicate elements
    vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    // Call the function to remove duplicates and store the returned size
    int ans = s.removeDuplicates(nums);

    // Output the size of the updated vector
    cout << "Size = " << ans;

    return 0; // Return 0 to indicate successful execution
}
