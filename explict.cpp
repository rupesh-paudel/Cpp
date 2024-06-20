#include<iostream>
using namespace std;
int main(){
    float f1,f2,f3;
    int num = 123;
    f1 = num/12;
    f2 = float(num)/12; // functional notation
    f3 = (float(num))/12; // c-like notation
    cout<<f1<<endl<<f2<<endl<<f3<<endl;
}