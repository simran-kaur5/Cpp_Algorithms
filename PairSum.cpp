//This pairsum approach worls only for sorted numbers

#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int> nums,int target) {
    int n=nums.size();
    vector<int>ans;
    int i=0,j=n-1;
    while(i<j) {
        int pairsum=nums[i]+nums[j];
        if(pairsum>target) {
            j--;
        }
        else if(pairsum<target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
return ans;
}
int main() {
    vector<int>nums={2,7,18,39};
    int target=46;
    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}
