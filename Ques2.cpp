//highest of 3 numbers
#include <iostream>
using namespace std;

int biggestNum(int a, int b, int c){
    int biggest=max(a,b);
    biggest=max(biggest,c);
    return biggest;
}

int main(){
    int a,b,c;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<"enter value of c:";
    cin>>c;
    cout<<biggestNum(a,b,c)<<endl;
}