#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int low = 0, high = nums.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target) 
                    return mid; // Return immediately if target is found
                else if (nums[mid] < target)
                    low = mid + 1; // Search in the right half
                else
                    high = mid - 1; // Search in the left half
            }
            return low; // The correct insertion index
        }
};
int main() {
    Solution obj;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout << obj.searchInsert(nums, target) << endl;
    return 0;
}
