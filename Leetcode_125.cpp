#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        // Function to check if a given string is a palindrome (ignoring non-alphanumeric characters and case)
        bool isPalindrome(string s) {
            int st = 0; // Pointer to the start of the string
            int end = s.length() - 1; // Pointer to the end of the string
            
            while (st < end) {
                // Skip non-alphanumeric characters from the start
                if (!iswalnum(s[st])) {
                    st++;
                    continue;
                }
                // Skip non-alphanumeric characters from the end
                if (!iswalnum(s[end])) {
                    end--;
                    continue;
                }
                // Compare characters after converting to lowercase
                if (tolower(s[st]) != tolower(s[end])) {
                    return false; // If mismatch found, it's not a palindrome
                }
                st++; // Move start pointer forward
                end--; // Move end pointer backward
            }
            return true; // If all comparisons pass, it's a palindrome
        }
};

int main() {
    string s = "A man, a plan, a canal: Panama"; // Test input
    Solution a;
    bool result = a.isPalindrome(s); // Check if the string is a palindrome
    cout << result << endl; // Output the result (1 for true, 0 for false)
    return 0;
}
