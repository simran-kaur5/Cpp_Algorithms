#include <iostream>  // Include the input-output stream library
#include <string>    // Include the string library

using namespace std; // Use the standard namespace to avoid prefixing std::

// Define a class named Solution
class Solution {
    public:
        // Function to find the first occurrence of "needle" in "haystack"
        int strStr(string haystack, string needle) {
            return haystack.find(needle); // Using the find() function of the string class
        }
};

int main()
{
    string haystack = "hello";  // Define the main string where we search
    string needle = "ll";       // Define the substring to be found

    Solution a;  // Create an instance of the Solution class
    int result = a.strStr(haystack, needle);  // Call strStr() and store the result

    cout << result << endl;  // Print the result (index of first occurrence or -1 if not found)

    return 0;  // Indicate successful program termination
}
