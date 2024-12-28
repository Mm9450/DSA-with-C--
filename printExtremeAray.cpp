#include<iostream>
using namespace std;
void printExtreme(int arr[], int size){
int left = 0;
int right = size -1;

while(left <= right)
{
if(left == right){
cout<<arr[left]<<endl;
}
else {
cout<<arr[left]<<endl;
cout<<arr[right]<<endl;


}
left++;
right--;
}
}

int main(){
int arr[] = {1,2,3,4,5,6,7};
int size = 7;

printExtreme(arr,size);
return 0;

}

