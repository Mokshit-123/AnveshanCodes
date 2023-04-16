//factorial of a number
#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if (n==0){
        return fact;
    }
    
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a,fact;
    cout<<"Enter value of a:";
    cin>>a;
    fact=factorial(a);
    cout<<fact<<endl;
}