//Function to add two numbers
#include <iostream>
using namespace std;

int addTwoNum(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<addTwoNum(a,b);
}