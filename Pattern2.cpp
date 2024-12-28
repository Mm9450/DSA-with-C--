#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1,j=0;
    while(i<=n){
        while(j<=i-1){
            cout<<i<<" ";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
}