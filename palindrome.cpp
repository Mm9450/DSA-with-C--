// #include<iostream>
// #include<string>
// #include<algorithm>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {

        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        for (int i = 0; i < s.size(); i++) {
             if ( (s[i] < 'a'|| s[i] > 'z')&&(s[i]>'9'||s[i]<'0')) {
                s.erase(i, 1);
            i--;
        }
    }
    string rev = s;
    //for (int i = 0; i < s.size(); i++) {
        cout<<s<<endl;
    //}
    reverse(rev.begin(), rev.end());
    
    if (s == rev)
    return true;
    else
    return false;
        
    }
int main(){
    string s = "0P";

    bool palin = isPalindrome(s);
    cout<<palin<<endl;
}