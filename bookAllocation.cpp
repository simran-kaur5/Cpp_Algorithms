#include<iostream>
#include<vector>
using namespace std;

// Function to check if it is possible to allocate books such that no student reads more than maxAllowedPages
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        // If a single book has more pages than maxAllowedPages, return false
        if (arr[i] > maxAllowedPages) {
            return false;
        }

        // If adding this book to the current student's allocation doesn't exceed maxAllowedPages
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        } else {
            // Allocate books to the next student
            students++;
            pages = arr[i];
        }
    }

    // Return true if the number of students required is less than or equal to m
    return students > m ? false : true;
}

// Function to allocate books such that the maximum number of pages assigned to a student is minimized
int allocateBooks(vector<int> &arr, int n, int m) {
    // If there are fewer books than students, return -1
    if(n < m) return -1;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum; // range of possible answers

    // Binary search to find the minimum possible value of the maximum number of pages
    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check if it is possible to allocate books with mid as the maximum number of pages
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; // Try for a smaller value in the left half
        } else {
            st = mid + 1; // Try for a larger value in the right half
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2; // Number of students

    cout << "The minimum possible value of the maximum number of pages is " << allocateBooks(arr, n, m) << endl;

    return 0;
}
