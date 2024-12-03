// Copy only the CLASS to submit on Leetcode !! 

#include<iostream> // Include input-output library
using namespace std;

// Define a class named Solution
class Solution {
public:
    // Function to check if a given integer is a palindrome
    bool isPalindrome(int x) {
        int m = x; // Store the original value of x to compare later
        double revNum = 0; // Variable to store the reversed number

        // Reverse the number
        while(x > 0) { // Continue until all digits are processed
            int lastDigit = x % 10; // Extract the last digit
            revNum = (revNum * 10) + lastDigit; // Build the reversed number
            x = x / 10; // Remove the last digit from x
        }

        // Check if the reversed number is equal to the original number
        if(revNum == m)
            return true; // Return true if the number is a palindrome
        else
            return false; // Return false otherwise
    }
};

// Main function to execute the program
int main() {
    Solution s; // Create an object of the Solution class

    // Check if 121 is a palindrome and print the result
    if(s.isPalindrome(121)) {
        cout << "The given number is Palindrome"; // Output if it is a palindrome
    } else {
        cout << "The given number is not a Palindrome"; // Output if it is not a palindrome
    }

    return 0; // Return 0 to indicate successful execution
}
