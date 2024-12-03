// Copy only the CLASS block to submit code on Leetcode !!

#include<iostream> // Include input-output library
#include<vector>   // Include vector library for using the vector container
using namespace std;

// Define a class named Solution
class Solution {
public:
    // Function to find the unique number in a vector
    // All numbers except one appear twice
    int singleNumber(vector<int>& nums) {
        int ans = 0; // Initialize a variable to store the result

        // Iterate through each value in the vector
        for (int val : nums) {
            ans = ans ^ val; // Use XOR operation to find the unique number
        }

        // Return the result
        return ans;
    }
};

// Main function to execute the program
int main() {
    Solution s; // Create an object of the Solution class

    // Initialize a vector with numbers where only one number appears once
    vector<int> vec = {4, 3, 1, 1, 3};

    // Call the function to find the unique number and print the result
    cout << "The unique number is " << s.singleNumber(vec);

    return 0; // Return 0 to indicate successful execution
}
