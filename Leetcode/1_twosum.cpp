#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int moreneed = target - num;
            if(mpp.find(moreneed)!=mpp.end()){
                return {mpp[moreneed], i};
            }
            mpp[num] = i;
        }
        return{-1,-1};
    }
};
//target for the code if you want to test it in vs code
int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    
    return 0;
}