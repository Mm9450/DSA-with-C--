#include<iostream>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 0;
        }
    }
    return 1;
}

int main(){

    int size; 
    cin>>size;
    int key;
    cin>>key;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool found= search(arr,size,key);
    if(found){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }
}