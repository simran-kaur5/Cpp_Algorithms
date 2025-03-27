#include <iostream>
using namespace std;

class Solution {
    public:
        // Function to calculate the maximum number of containers that can be carried
        int maxContainers(int n, int w, int maxWeight) {
            // Check if the total possible containers (n*n) exceeds the weight capacity
            return ((maxWeight / w) > n * n) ? n * n : (maxWeight / w);
        }
};

int main() {
    Solution obj; // Creating an instance of the Solution class
    
    int n = 2; // Number of rows/columns of containers (assuming a square grid)
    int w = 2; // Weight of each container
    int maxWeight = 6; // Maximum weight that can be carried

    // Calling the function to get the result
    int result = obj.maxContainers(n, w, maxWeight);
    
    // Printing the result
    cout << result << endl;

    return 0;
}
