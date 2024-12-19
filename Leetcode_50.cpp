#include<iostream>
using namespace std;

// Function to calculate x^n using binary exponentiation
double myPow(double x, int n) {
    // Convert n to a long type to handle edge cases like INT_MIN
    long binForm = n;

    // If the exponent is negative, take the reciprocal of the base and make the exponent positive
    if(n < 0) {
        x = 1 / x; // Reciprocal of base
        binForm = -binForm; // Make exponent positive
    }

    double ans = 1; // Initialize result to 1

    // Binary exponentiation loop
    while(binForm > 0) {
        // If the current bit of the exponent is 1, multiply the result by the base
        if(binForm % 2 == 1) {
            ans *= x;
        }
        x *= x; // Square the base for the next bit
        binForm /= 2; // Shift the exponent to the right (divide by 2)
    }

    return ans; // Return the final result
}

int main() {
    double x; // Base
    int n;    // Exponent

    // Prompt user to enter base and exponent
    cout << "Enter base and pow: ";
    cin >> x >> n;

    // Calculate x^n using the myPow function
    double ans = myPow(x, n);

    // Display the result
    cout << "Answer: " << ans;

    return 0; // End of program
}
