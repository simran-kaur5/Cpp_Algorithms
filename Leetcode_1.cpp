#include <iostream>
#include<vector>
using namespace std;

// Define a class named Solution
class Solution
{
    public:
    // Declare variables
    int arr[10]; // Array to hold a maximum of 10 elements
    int target, n, i, j; // Variables for target, size of array, and iterators

    public:
    // Function to find two indices in the array whose values sum up to the target
    int twoSum()
    {
        // Prompt user to enter the size of the array
        cout << "Enter the size of array < 10\n";
        cin >> n; // Read the size of the array

        // Prompt user to enter the elements of the array
        cout << "Enter the array elements\n";
        for (i = 0; i < n; i++) { // Loop to read 'n' elements
            cin >> arr[i];
        }

        // Prompt user to enter the target sum
        cout << "Enter the target element\n";
        cin >> target;

        // Nested loop to find two indices whose elements add up to the target
        for (i = 0; i < n; i++) { // Outer loop
            for (j = 0; j < n; j++) { // Inner loop
                // Check if the sum of elements at indices i and j equals the target
                if (arr[i] + arr[j] == target) {
                    // Print the indices and values of the two elements
                    cout << "The indexes are " << i << " and " << j << endl;
                    cout << "The value at those indexes are " << arr[i] << " and " << arr[j] << endl;
                    cout << arr[i] << " + " << arr[j] << " = " << target;

                    return 0; // Exit the function once a pair is found
                }
            }
        }

        return 0; // Return 0 if no pair is found
    }
};

// Main function to execute the program
int main() {
    Solution a; // Create an object of the Solution class
    a.twoSum(); // Call the twoSum function
    return 0; // Return 0 to indicate successful execution
}
