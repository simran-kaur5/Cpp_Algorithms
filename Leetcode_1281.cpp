// Leetcode_1281.cpp
// Problem: Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n > 0) {
            int x = n%10;
            sum += x;
            prod *= x;
            n=n/10;
        }
        return prod-sum;
    }
};
int main() {
    Solution s;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Result: " << s.subtractProductAndSum(n) << endl;
    return 0;
}
