#include <iostream>
#include <vector>
using namespace std;
// 1051. Height Checker
class Solution {
    public:
        int heightChecker(vector<int>& heights) {
            int res = 0;
            int size = heights.size();
            vector<int> exp;
            for(int val : heights) {
                exp.push_back(val);
            }
            for(int i=0;i<size;i++) {
                for(int j=0;j<size-1;j++){
                    if(exp[j] > exp[j+1]){
                        swap(exp[j],exp[j+1]);
                    }
                }
            }
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
