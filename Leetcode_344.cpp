#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Class Solution contains the function to reverse a string
class Solution {
    public:
        // Function to reverse a character array in place
        void reverseString(vector<char>& s) {
            int st = 0;                // Start index
            int end = s.size() - 1;    // End index
            
            // Swap characters until the middle of the array is reached
            while (st < end) {
                swap(s[st++], s[end--]); // Swap and move indices inward
            }
        }
};

int main() {
    // Input character array
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    Solution obj; // Creating an object of the Solution class
    obj.reverseString(s); // Calling the function to reverse the array

    // Printing the reversed array
    for(char c : s) {
        cout << c << " "; 
    }
    
    return 0; // Indicating successful program execution
}
