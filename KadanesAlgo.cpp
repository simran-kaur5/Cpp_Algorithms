// Kadanes algorithm is used to find the maximum sum of sub-arrays
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int maxSubArray(vector<int> &vec) {
    int curSum=0 , maxSum = INT_MIN;
    for(int value : vec) {
        curSum += value;                //Here we are adding the values of each index and storing it in curSum
        maxSum = max(curSum,maxSum);    //Here we are comparing the values of curSum and maxSum and storing the maxvalue in maxSum
        if(curSum < 0) {                //We are re-initializing curSum to 0 if it is a negative number 
            curSum = 0;                 //We ar doing that because adding a -ve number to any +ve will eventually make it smaller  
        }
    }
    return maxSum;
}
int main() {
    vector<int> vec = {5,4,-1,7,8};
    vector<int> vec2 = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<"The Maximum Subarray sum of {5,4,-1,7,8} is "<<maxSubArray(vec)<<endl;
    cout<<"The Maximum Subarray sum of {-2,1,-3,4,-1,2,1,-5,4} is "<<maxSubArray(vec2)<<endl; 
    return 0;
}
