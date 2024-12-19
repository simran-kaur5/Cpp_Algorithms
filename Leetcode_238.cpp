#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the product of the array except self
// Time complexity: O(n), Space complexity: O(1) (excluding output vector)
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(); // Size of the input array
    vector<int> ans(n, 1); // Initialize result vector with 1 for all elements
    int suffix = 1; // Variable to keep track of the suffix product

    // First pass: Compute the prefix product for each element
    for(int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1]; // Prefix product for index i
    }

    // Second pass: Multiply by the suffix product for each element
    for(int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1]; // Update the suffix product
        ans[i] *= suffix; // Multiply the prefix product by the suffix product
    }

    return ans; // Return the resulting vector
}

int main() {
    // Input array
    vector<int> nums = {1, 2, 3, 4};

    // Call the function to compute the result
    vector<int> ans = productExceptSelf(nums);

    // Display the result
    cout << "Product of Array except self is ";
    for(int value : ans) {
        cout << value << " "; // Print each value in the result
    }

    return 0; // End of program
}
