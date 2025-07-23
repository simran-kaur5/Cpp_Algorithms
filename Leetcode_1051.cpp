#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 1051. Height Checker
class Solution {
    public:
        int heightChecker(vector<int>& heights) {
            int res = 0;
            int size = heights.size();
            vector<int> exp(heights); // insert values of heightS in exp
            
            sort(exp.begin() , exp.end());   //inbuilt func in c++ to sort vec
            
            for(int i=0;i<exp.size();i++){
                if(exp[i] != heights[i]){
                    res++;
                }
            }
            return res;
        }
    };
int main() {
    Solution s;
    vector<int> heights = {1,1,4,2,1,3};
    cout << s.heightChecker(heights) << endl; // Output: 3
    return 0;
}
