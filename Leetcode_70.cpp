// Copy only the CLASS block to submit code on Leetcode !!

#include<iostream> // Include input-output library
using namespace std;

// Define a class named Solution
class Solution {
public:
    // Function to calculate the number of distinct ways to climb `n` stairs
    int climbStairs(int n) {
        // Base case: if `n` is 0 or 1, there's only one way to climb
        if (n <= 1) 
            return 1;

        // Initialize the variables for the previous two steps
        int n2 = 1; // Represents the number of ways to climb 0 stairs (base case)
        int n1 = 1; // Represents the number of ways to climb 1 stair (base case)

        // Loop from the second step to the nth step
        for (int i = 2; i <= n; ++i) {
            // Calculate the number of ways to climb the current step
            int current = n1 + n2; // Current ways are the sum of the ways to climb the previous two steps
            n2 = n1;              // Update `n2` to be the previous step's ways
            n1 = current;         // Update `n1` to be the current step's ways
        }

        return n1; // Return the number of ways to climb `n` stairs
    }
};

// Main function to execute the program
int main() {
    Solution s; // Create an object of the Solution class
    int n; // Variable to store the number of stairs
    cout << "Enter the number of stairs" << endl; // Prompt the user to enter the number of stairs
    cin >> n; // Read the input

    // Call the `climbStairs` function to calculate the number of combinations
    int ans = s.climbStairs(n);

    // Output the result
    cout << "The number of combinations are " << ans;

    return 0; // Return 0 to indicate successful execution
}
