# Kadane's Algorithm: Maximum Subarray Sum
This code demonstrates Kadane's Algorithm, an efficient approach to find the maximum sum of contiguous subarrays within a given array. 

This repository contains an implementation of **Kadane's Algorithm**, which finds the maximum sum of contiguous subarrays within a given array. Kadane's Algorithm efficiently computes this maximum sum in linear time, making it a popular choice for solving subarray sum problems.

## Algorithm Overview

Kadane’s Algorithm iterates through the array and, for each element:
- Accumulates a running sum (`curSum`).
- Updates the `maxSum` variable if `curSum` is greater than the current `maxSum`.
- Resets `curSum` to 0 if it becomes negative, as a negative running sum would reduce the value of any subsequent sums.

### Time Complexity
- **O(n)**, where n is the number of elements in the array.

### Space Complexity
- **O(1)**, as it only requires a few extra variables for tracking sums.

## Code Explanation

The function `maxSubArray` takes an integer vector as input and returns the maximum sum of its contiguous subarrays. 

```cpp
int maxSubArray(vector<int> &vec) {
    int curSum = 0, maxSum = INT_MIN;
    for (int value : vec) {
        curSum += value;             // Add current element to curSum
        maxSum = max(curSum, maxSum); // Update maxSum if curSum is higher
        if (curSum < 0) curSum = 0;   // Reset curSum if it goes negative
    }
    return maxSum;
}
```

### Example Usage

The `main` function demonstrates the algorithm with two example vectors:

```cpp
vector<int> vec = {5, 4, -1, 7, 8};
vector<int> vec2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
cout << "The Maximum Subarray sum of {5, 4, -1, 7, 8} is " << maxSubArray(vec) << endl;
cout << "The Maximum Subarray sum of {-2, 1, -3, 4, -1, 2, 1, -5, 4} is " << maxSubArray(vec2) << endl;
```

### Output
The expected output for the above vectors is:
```
The Maximum Subarray sum of {5, 4, -1, 7, 8} is 23
The Maximum Subarray sum of {-2, 1, -3, 4, -1, 2, 1, -5, 4} is 6
```

## How to Run

1. Clone this repository.
2. Compile the code using a C++ compiler:
   ```bash
   g++ -o kadane kadane.cpp
   ```
3. Run the executable:
   ```bash
   ./kadane
   ```

## License
This project is open-source and free to use.
