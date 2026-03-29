#include <iostream>
using namespace std;

class Solution {
    public:
    int threeSumClosest(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-1;i++){
            int left=i+1;
            int right=nums.size()-1;

            while(left <right){
                int sum=nums[i]+nums[left]+nums[right];
                if(abs(sum-target)<abs(closest - target)){
                    closest =sum;
                }
                if(sum<target) left++;
                else if(sum>target) right--;
                else return sum;
            }
            
        }
        return closest;
    }
};
int main(){
    vector<int> nums={-1,2,1,-4};
    Solution S;
    cout<<S.threeSumClosest(nums,1);
    return 0;
}