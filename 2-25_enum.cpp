//WAP to define enumeration of your choice and use it in a suitable program.
#include<iostream>
using namespace std;
int main(){
    enum colour{
        red, //here the default value for first enumerator is 0 ,then the value gors increasing like 0,1,2,3,...
        blue,
        green,
        black,
        pink
    };
    //we can also assign the value of enumetator explicitly like
    enum animal{
        tiger=10,
        bear,
        lion=50,
        elephant=20,
        rhino,
    };
    colour a;
    animal b;
    b = rhino;
    a = pink;
    cout<<"the colour code is :"<<a<<endl;
    cout <<"the code of rhino is:"<<b<<endl;
    cout<<"tiger:"<<tiger<<" bear"<<bear<<" lion:"<<lion<<" elephant:"<<elephant<<" rhino:"<<rhino;
    return 0;
    
}