//WAP that reads multiple lines from text from user and display them on the screen.
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main(){
    char st[50];
    cout<<"enter string(use '#' to end)"<<endl;
    cin.get(st,50,'#');
    int i = strlen(st);
    cout<<"the entered string is"<<endl<<st;
    cout<<endl<<"the length of the string is:"<<i;
}