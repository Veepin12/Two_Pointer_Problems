#include <iostream>
using namespace std;
 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        
        for( int i = 0; i < n ; i++){
            if( nums[i] != 0){
                swap( nums[pos],nums[i]);
                pos++;
            }
        }
        for( int i = 0; i < n; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Solution S;
    vector<int> nums= { 0,1,4,0,6};
    S.moveZeroes(nums);
    return 0;
}