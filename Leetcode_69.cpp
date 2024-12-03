// Copy only the CLASS block to submit code on Leetcode !!

#include<iostream> // Include input-output library
using namespace std;

// Define a class named Solution
class Solution {
public:
    // Function to calculate the square root of an integer `n`
    int mySqrt(int n) {
        // Handle edge case: if `n` is less than 2, return `n` (as sqrt(0) = 0 and sqrt(1) = 1)
        if (n < 2) {
            return n;
        }

        // Use binary search to find the square root
        long low = 1, high = n; // Initialize the search range

        while (low <= high) { // Continue until the range is valid
            long mid = (low + high) / 2; // Calculate the midpoint

            if (mid * mid == n) { // If mid squared equals `n`, we found the square root
                return mid;
            } else if (mid * mid < n) { // If mid squared is less than `n`, search the upper half
                low = mid + 1;
            } else { // If mid squared is greater than `n`, search the lower half
                high = mid - 1;
            }
        }

        // If `high` is negative, return its absolute value (though this should not occur in valid cases)
        if (high < 0) {
            return -high;
        } else {
            return high; // Return the floor of the square root (largest integer less than or equal to sqrt(n))
        }
    }
};

// Main function to execute the program
int main() {
    Solution s; // Create an object of the Solution class
    int x; // Variable to store the user input
    cout << "Enter a number to find sqrt" << endl; // Prompt user for input
    cin >> x; // Read the input number
    int ans = s.mySqrt(x); // Call the `mySqrt` function to compute the square root
    cout << "The square root of " << x << " is " << ans; // Output the result
    return 0; // Return 0 to indicate successful execution
}
