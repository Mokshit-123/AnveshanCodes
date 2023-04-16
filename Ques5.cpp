#include <iostream>
using namespace std;

int reverseInt(int n){
    int rev=0;
    while (n>0){
        int last=n%10;
        rev=(rev*10)+last;
        n=n/10;
    }
    return (rev);
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int reverse = reverseInt(n);
    cout<<reverse<<endl;
}