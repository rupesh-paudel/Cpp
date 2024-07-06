//WAP to set and reset flags using manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float num = 701.568894777;
    cout<<"num in scientific notation:"<<setiosflags(ios::scientific)<<num<<endl;
    cout<<resetiosflags(ios::scientific)<<"num in normal form:"<<num<<endl;
    return 0;
}