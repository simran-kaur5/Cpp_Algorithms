// Copy only the CLASS block to submit code on Leetcode !!
// This is solved using Kadane's Algorithm.
// Visit Kadanes Algorithm Repo and Readme to understand better.

#include<iostream>   // Include the input-output library
#include<vector>     // Include the vector library for using the vector container
#include<climits>    // Include limits library for using INT_MIN
using namespace std;

// Function to find the maximum subarray sum
int maxSubArray(vector<int> &vec) {
    int curSum = 0;                 // Variable to track the current subarray sum
    int maxSum = INT_MIN;           // Initialize maxSum to the smallest possible integer value

    // Iterate through each value in the vector
    for(int value : vec) {
        curSum += value;            // Add the current value to the curSum
        maxSum = max(curSum, maxSum); // Update maxSum with the maximum of curSum and maxSum

        // If curSum becomes negative, reset it to 0
        if(curSum < 0) {            
            curSum = 0;             // Resetting because a negative sum will reduce the overall sum
        }
    }

    return maxSum;                  // Return the maximum subarray sum
}

int main() {
    // Test case 1
    vector<int> vec = {5, 4, -1, 7, 8}; // Define a vector with positive and negative values
    // Test case 2
    vector<int> vec2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Another vector with mixed values

    // Print the maximum subarray sum for the first test case
    cout << "The Maximum Subarray sum of {5, 4, -1, 7, 8} is " << maxSubArray(vec) << endl;

    // Print the maximum subarray sum for the second test case
    cout << "The Maximum Subarray sum of {-2, 1, -3, 4, -1, 2, 1, -5, 4} is " << maxSubArray(vec2) << endl; 

    return 0; // Return 0 to indicate successful execution
}
