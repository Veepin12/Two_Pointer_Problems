#include <iostream>
using namespace std;
class Solution {
public:


    void reverse_string( vector<char> & nums){

        int n = nums.size();

        /* string s = "";
        vector<char> ans;

        for( int i = 0 ; i < n ;i++ ){
            s += nums[i];
        }
        for( int i =0; i < s.length(); i++){
            ans.push_back(s[i]);
        }
        reverse(ans.begin(),ans.end());

        for( char ch : ans){
            cout<<ch<<" ";
        }
        */

       reverse(nums.begin(),nums.end());
    }


};
int main(){
    vector<char> nums = {'h','e','l','l','o'};
    Solution S;
    S.reverse_string(nums);
    return 0;

}