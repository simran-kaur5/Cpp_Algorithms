// Problem: Sort Array By Parity
// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

class Solution {
    public:
        vector<int> sortArrayByParity(vector<int>& nums) {
            int i = 0, j = nums.size() - 1;  // Initialize two pointers: 'i' at start, 'j' at end
            
            while (i < j) {
                // Swap elements if left is odd and right is even
                if (nums[i] % 2 > nums[j] % 2) {  
                    swap(nums[i], nums[j]);
                }
                
                // Move 'i' forward if it's already even
                if (nums[i] % 2 == 0) 
                    i++;
                
                // Move 'j' backward if it's already odd
                if (nums[j] % 2 == 1)
                    j--;
            }
            
            return nums;  // Return the modified array
        }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 1, 2, 4};  // Input array
    vector<int> result = obj.sortArrayByParity(nums);  // Call function
    
    // Print the sorted array
    for (int value : result) {
        cout << value << endl;
    }

    return 0;
}
