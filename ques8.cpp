//write a program to do binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int start,end,mid;
    start=0;
    end=size-1;
    while (start<=end){
        mid=start+(end-start)/2;
        if (arr[mid]==key){
            return(mid);
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return (-1);
}

int main(){
    int arr[50], key, size;
    cout<<"Enter number of elements in you array:";
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<':';
        cin>>arr[i];
    }
    cout<<"ENter the element you want to find:";
    cin>>key;
    int pos=binarySearch(arr,key,size);
    cout<<key<<" is found at index "<<pos<<" in given array"<<endl;
}