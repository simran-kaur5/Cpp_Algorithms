#include<iostream>
#include<vector>
using namespace std;

// This function finds two indices in a sorted vector whose values sum up to the target value.
vector<int> pairSum(vector<int> nums, int target) {
    int n = nums.size();
    vector<int> ans;
    int i = 0, j = n - 1; // Set pointers at the beginning and end of the vector

    // Loop until the pointers cross each other
    while (i < j) {
        int pairsum = nums[i] + nums[j]; // Calculate the sum of elements at pointers

        // If pairsum is greater than target, move the end pointer to the left
        if (pairsum > target) {
            j--;
        }
        // If pairsum is less than target, move the start pointer to the right
        else if (pairsum < target) {
            i++;
        }
        // If pairsum equals target, store the indices and return the result
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans; // Return empty if no such pair exists
}

int main() {
    vector<int> nums = {2, 7, 18, 39}; // Sorted array
    int target = 46;
    vector<int> ans = pairSum(nums, target);

    // Output the result
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}
