#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            long long rev = 0; // Using long long to handle overflow cases
            
            if (x == 0) { // If input is 0, return it immediately
                return x;
            }
            
            // Loop to extract digits and reverse the number
            while (x != 0) {
                int ld = x % 10; // Extract last digit
                rev = (rev * 10) + ld; // Append last digit to reversed number
                x = x / 10; // Remove last digit from original number
            }
            
            // Check for overflow conditions (if reversed number exceeds 32-bit integer limits)
            if ((rev >= INT_MAX) || (rev <= INT_MIN)) {
                return 0;
            }

            return rev; // Return the reversed number
        }
};

int main() {
    Solution obj; // Create an object of Solution class
    int x = 123; // Input number
    int result = obj.reverse(x); // Call reverse function
    cout << result << endl; // Print the reversed number
    return 0;
}
