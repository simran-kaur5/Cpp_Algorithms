// Copy only the CLASS block to submit code on Leetcode !!
#include <iostream> 
using namespace std;
// Define the Solution class
class Solution {
public:
    // Method to check if the usage of capital letters in the word is valid
    bool detectCapitalUse(string word) {
        int flag2 = 0; // Flag to track if the first character is uppercase
        int len = 0;   // To calculate the length of the word
        int flag = 0;  // To count the number of uppercase characters
        // Check if the first character is uppercase
        if (word[0] >= 'A' && word[0] <= 'Z') {
            flag2 = 1;
        }
        // Loop through each character in the word
        for (char ch : word) {
            len += 1; // Increment length counter
            // Check if the character is uppercase
            if (ch >= 'A' && ch <= 'Z') {
                flag += 1; // Increment uppercase counter
            }
        }
        // Check if the word satisfies the rules for valid capital usage
        if (flag == 1 && flag2 == 1) { // Case 1: Only the first letter is capital
            return true;
        } else if (flag == len) { // Case 2: All letters are capital
            return true;
        } else if (flag == 0) { // Case 3: All letters are lowercase
            return true;
        } else { // Any other cases are invalid
            return false;
        }
    }
};
int main() {
    Solution s;
    // Test case 1
    if (s.detectCapitalUse("AbhiGoat")) { // Mixed case, should return false
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    // Test case 2
    if (s.detectCapitalUse("Abhigoat")) { // First letter uppercase, valid case
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
