#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){

for(int left =0,  right = size -1; left<=right; left++,right--){
swap(arr[left],arr[right]);
}

for(int i =0 ; i<=size-1; i++){
cout<<arr[i]<<" ";
}

}
int main(){
int  arr[] = {1,2,3,4,5,6,7};
int size = 7;

reverseArray(arr, size);
return 0;
}