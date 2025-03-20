#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

class Solution {
    public:
        // Function to remove all occurrences of 'part' from string 's'
        string removeOccurrences(string s, string part) {
            // Keep removing 'part' from 's' as long as it is found in 's'
            while (s.length() > 0 && s.find(part) < s.length()) {
                s.erase(s.find(part), part.length()); // Erase the found substring
            }
            return s; // Return the modified string
        }
};

int main() {
    Solution sol; // Create an instance of the Solution class

    // Example input string and part to remove
    string s = "daabcbaabcbc", part = "abc";
    
    // Call the function and print the result
    cout << sol.removeOccurrences(s, part) << endl;
    
    return 0; // Return 0 to indicate successful execution
}
