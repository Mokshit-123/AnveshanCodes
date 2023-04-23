#include <iostream>
using namespace std;
int linearSearch(int arr[], int key, int size){
    for (int j=0;j<size;j++){
        if (arr[j]==key){
            return(j);
        }
    }
    return(-1);
}
int main(){
    int arr[50];
    int key,size;
    cout<<"Enter size of array:";
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<':';
        cin>>arr[i];
    }
    cout<<"Enter element you want to find:";
    cin>>key;
    int pos=linearSearch(arr,key,size);
    cout<<key<<" is present at index "<<pos<<" in given array"<<endl;
}