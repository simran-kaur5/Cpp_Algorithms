#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the maximum area of water that can be contained
int maxArea(vector<int>& height) {
    int lp = 0; // Left pointer, starting at the beginning of the array
    int rp = height.size() - 1; // Right pointer, starting at the end of the array
    int ans = 0; // Variable to store the maximum area found
    int h, w, currWtr; // Variables for height, width, and current water area

    // Two-pointer approach to find the maximum area
    while(lp < rp) {
        w = rp - lp; // Calculate the width between the two pointers
        h = min(height[lp], height[rp]); // Height is the minimum of the two ends
        currWtr = w * h; // Current water area is width multiplied by height
        ans = max(ans, currWtr); // Update the maximum area if the current area is larger

        // Move the pointer pointing to the smaller height
        // This is because the limiting factor for the area is the smaller height
       height[lp] < height[rp] ? lp++ : rp--;
    }

    return ans; // Return the maximum area found
}

int main() {
    // Vector representing heights of lines forming the container
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // Call the function and display the maximum water area
    cout << "Max Water stored is " << maxArea(height);

    return 0; // End of program
}
