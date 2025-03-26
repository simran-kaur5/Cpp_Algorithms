#include <iostream>  // For input-output operations
#include <vector>    // For using vector container
using namespace std; // To avoid using std:: prefix

// Class Solution that contains the function fizzBuzz
class Solution {
    public:
        // Function that returns a vector of strings based on FizzBuzz rules
        vector<string> fizzBuzz(int n) {
            vector<string> res; // Vector to store the result
            for(int i = 1; i <= n; i++) { // Loop from 1 to n
                // If 'i' is divisible by both 3 and 5, add "FizzBuzz"
                if((i % 3) == 0 && (i % 5) == 0) 
                    res.push_back("FizzBuzz");
                // If 'i' is divisible only by 5, add "Buzz"
                else if((i % 5) == 0)
                    res.push_back("Buzz");
                // If 'i' is divisible only by 3, add "Fizz"
                else if((i % 3) == 0) 
                    res.push_back("Fizz");
                // Otherwise, add the number as a string
                else 
                    res.push_back(to_string(i));
            }
            return res; // Return the result vector
        }
};

// Main function to test the fizzBuzz function
int main() {
    Solution s; // Create an instance of the Solution class
    vector<string> ans = s.fizzBuzz(15); // Call fizzBuzz for n = 15

    // Print the results
    for(string val : ans) {
        cout << val << endl;
    }

    return 0; // Indicate successful execution
}
