#include <iostream>
using namespace std;

int maximumNum(int arr[], int size){
    int biggest=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>biggest){
            biggest=arr[i];
        }
    }
    return(biggest);
}

int main(){
    int size, arr[50];
    cout<<"Enyter size of your array:";
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<':';
        cin>>arr[i];
    }
    int biggest=maximumNum(arr,size);
    cout<<"Maximum number in given array is: "<<biggest<<endl;
}