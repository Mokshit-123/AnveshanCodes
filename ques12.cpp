#include <iostream>
using namespace std;

void revArr(int arr[],int size){
    int reverse[size];
    for (int i=size-1;i>=0;i--){
        reverse[size-1-i]=arr[i];
    }
    for (int i=0;i<size;i++){
        arr[i]=reverse[i];
    }
}

int main(){
    int size;
    cout<<"enter size of your array:";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<':';
        cin>>arr[i];
    }
    revArr(arr,size);
    cout<<"Reversed arr is:{";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<'}'<<endl;
}