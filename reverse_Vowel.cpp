#include <iostream>
using namespace std;

class Solution{
public:

    bool vowels( char & ch){
         return ( ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'u' || ch == 'o');
        
       

    }

    
    
    string vowel( string & s){

        
        string vowel_str ;
        

        for( int i = 0; i < s.length(); i++){
            if(vowels(s[i])){
                vowel_str += s[i];

            
            }
        }
        int n = vowel_str.length() -1;

        for( int i = 0; i < s.length(); i++){
            if(vowels(s[i])){
                s[i] = vowel_str[n--];

            }
        }
        return s;
    }


};

int main(){
    Solution S;
    string s ;
    getline(cin,s);
    cout<<S.vowel(s)<<endl;
    return 0;
}