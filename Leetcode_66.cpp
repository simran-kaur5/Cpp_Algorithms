// Copy only the CLASS block to submit code on Leetcode !!
#include<iostream>
#include<vector>
using namespace std;
// Definition of the Solution class containing the plusOne method
class Solution {
public:
    // This method increments the given number (represented as a vector of digits) by one
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // Get the size of the digits vector
        
        // Traverse the vector from the last digit to the first
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) { // If the current digit is less than 9, simply increment it
                digits[i] += 1;
                return digits; // Return the updated vector as there's no carryover
            }
            // If the digit is 9, set it to 0 (carryover case)
            digits[i] = 0;
        }
        // If all digits were 9, add a leading 1 to the vector (e.g., 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main() {
    Solution s; // Create an instance of the Solution class
    vector<int> nums = {1, 2, 3}; // Input vector representing the number 123    
    // Print the input number
    cout << "Input is: " << endl;
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;    
    // Call the plusOne method and store the result
    vector<int> res = s.plusOne(nums);    
    // Print the resulting vector
    cout << "Result is: " << endl;
    for (int i : res) {
        cout << i << " ";
    }
    return 0; // Exit the program
}
