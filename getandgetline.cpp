/*#include <iostream>
using namespace std;
int main(){
    char fullname[20],address[20];
    cout<<"enter name:";
    cin.get(fullname,20);
    cout<<"enter address:";
    cin.get(address,20);
    cout<<"\nName="<<fullname<<"Address:"<<address;
    return 0;
}*/
//here, when input value is entered and pressed enter key , the newline character (i.e. enter key ) remains in buffer so that the buffered mew line character will be input value for nwxt get() function(i.e for address). so the program doesnt prompt for address. this issue can be solved using getline() function.
#include <iostream>
using namespace std;
int main(){
    char fullname[20], address[20];
    cout<<"enter your full name";
    cin.getline(fullname,20);
    cout<<"enter the address:";
    cin.getline(address,20);
    cout<<"Fullname:"<<fullname<<" "<<"address:"<<address;
}