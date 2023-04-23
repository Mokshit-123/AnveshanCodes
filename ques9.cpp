#include <iostream>
using namespace std;

bool isZero(int n){
    if (n==0){
        return (true);
    }
    else{
        return(false);
    }
}

bool isOne(int n){
    if (n==1){
        return(true);
    }
    else{
        return(false);
    }
}

pair<int,int> ZeroesOnes(int arr[], int size){
    int countZeroes=0;
    int countOnes=0;
    int element;
    for (int j=0;j<size;j++){
        element=arr[j];
        if (isOne(element)){
            countOnes+=1;
        }
        else if (isZero(element)){
            countZeroes+=1;
        }
    }
    return(make_pair(countZeroes,countOnes));
}

int main(){
    int arr[50], size, ones, zeroes;
    cout<<"Enter size of array:";
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<':';
        cin>>arr[i];
    }
    pair<int,int> count=ZeroesOnes(arr, size);
    cout<<"Zeroes: "<<count.first<<endl;
    cout<<"Ones: "<<count.second<<endl;
}