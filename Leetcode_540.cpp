#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Function to find the single non-duplicate element in a sorted array
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // If the array has only one element, return that element
        if(n == 1) {
            return nums[0];
        }
        
        int mid, st = 0, end = n - 1;
        
        // Binary search to find the single non-duplicate element
        while(st <= end) {
            mid = st + (end - st) / 2;
            
            // Check if the first element is the single non-duplicate
            if(mid == 0 && nums[0] != nums[1]) {
                return nums[mid];
            }
            
            // Check if the last element is the single non-duplicate
            if(mid == n - 1 && nums[n - 1] != nums[n - 2]) {
                return nums[mid];
            }
            
            // Check if the mid element is the single non-duplicate
            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            
            // If mid is even
            if(mid % 2 == 0) {
                // If the previous element is equal to mid, move to the left half
                if(nums[mid - 1] == nums[mid]) {
                    end = mid - 1;
                }
                // Otherwise, move to the right half
                else {
                    st = mid + 1;
                }
            }
            // If mid is odd
            else {
                // If the previous element is equal to mid, move to the right half
                if(nums[mid - 1] == nums[mid]) {
                    st = mid + 1;
                }
                // Otherwise, move to the left half
                else {
                    end = mid - 1;
                }
            }
        }
        // Return -1 if no single non-duplicate element is found (should not happen in a valid input)
        return -1;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<s.singleNonDuplicate(nums);
    return 0;
}
