//sum of even numbers upto N
#include <iostream>
using namespace std;

int sumOfNEven(int n){
    if (n<2){
        return 0;
    }
    int sum=0;
    for (int i=2;i<=n;i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int N;
    cout<<"enter value of N:";
    cin>>N;
    cout<<sumOfNEven(N)<<endl;
}