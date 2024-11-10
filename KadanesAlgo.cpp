#include<iostream>
#include<vector>
#include <climits>
using namespace std;

// Kadane's algorithm is used to find the maximum sum of subarrays.
int maxSubArray(vector<int> &vec) {
    int curSum = 0, maxSum = INT_MIN; // Initialize current sum and maximum sum

    // Loop through each element in the vector
    for(int value : vec) {
        curSum += value;                // Add each element's value to curSum

        // Update maxSum if curSum is greater than maxSum
        maxSum = max(curSum, maxSum);

        // If curSum is negative, reset it to 0 to start a new subarray
        if(curSum < 0) {
            curSum = 0;                 // Resetting curSum because a negative sum will reduce any positive sum
        }
    }
    return maxSum; // Return the maximum sum found
}

int main() {
    vector<int> vec = {5, 4, -1, 7, 8}; // Example array with positive and negative numbers
    vector<int> vec2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Another test case with mixed values

    // Output the maximum subarray sum for each vector
    cout << "The Maximum Subarray sum of {5,4,-1,7,8} is " << maxSubArray(vec) << endl;
    cout << "The Maximum Subarray sum of {-2,1,-3,4,-1,2,1,-5,4} is " << maxSubArray(vec2) << endl;

    return 0;
}
