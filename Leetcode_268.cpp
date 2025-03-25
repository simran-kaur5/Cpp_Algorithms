#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        // Function to find the missing number in the given array
        int missingNumber(vector<int>& nums) {
            int n = nums.size();  // Get the size of the array
            int sum = n * (n + 1) / 2;  // Calculate the expected sum of first 'n' natural numbers using the formula
            int res = 0;  // Variable to store the sum of elements in the given array
            
            // Loop through the array to compute the actual sum
            for(int val : nums) {
                res += val;
            }
            
            return (sum - res);  // The missing number is the difference between the expected and actual sum
        }
};

int main() {
    Solution obj;  // Create an object of the Solution class
    vector<int> nums = {3, 0, 1};  // Define a vector containing numbers with one missing value
    
    // Call the function and print the missing number
    cout << obj.missingNumber(nums) << endl;
    
    return 0;
}
