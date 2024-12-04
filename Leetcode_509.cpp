// Copy only the CLASS block to submit code on Leetcode !!
#include <iostream>
using namespace std;
// Define the Solution class
class Solution {
public:
    // Recursive method to calculate the nth Fibonacci number
    int fib(int n) {
        int ans = 0; // Variable to store the Fibonacci value for the current n
        
        // Base case: If n is 0, the Fibonacci number is 0
        if (n == 0) {
            return 0;
        }
        // Base case: If n is 1, the Fibonacci number is 1
        else if (n == 1) {
            return 1;
        }
        // Recursive case: Calculate Fibonacci using the relation F(n) = F(n-1) + F(n-2)
        else {
            ans = fib(n - 1) + fib(n - 2);
        }
        return ans; // Return the computed Fibonacci value
    }
};
int main() {
    Solution s;
    // Calculate and print the 5th Fibonacci number
    cout << s.fib(5);
    return 0;
}
