#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Function to find the peak index in a mountain array
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size()-1, mid;
        
        // Binary search to find the peak element
        while(st <= end) {
            mid = st + (end - st)/2;
            
            // If mid is the first element, return the next element
            if(mid == 0){
                return (mid+1);
            }
            // Check if mid is the peak element
            else if(arr[mid-1] <= arr[mid] && arr[mid] >= arr[mid+1]) {
                return mid;
            }
            // If the element at mid is greater than the previous element, move to the right half
            if(arr[mid] > arr[mid -1]) {
                st = mid+1;
            }
            // Otherwise, move to the left half
            else {
                end = mid-1;
            }
        }
        // Return -1 if no peak is found (should not happen in a valid mountain array)
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> arr = {0,1,0};
    // Print the peak index of the mountain array
    cout<<s.peakIndexInMountainArray(arr);
    return 0;
}
