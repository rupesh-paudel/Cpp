//Wap to read number of students in a class and then read marks of each student.Display entered marks and theiraverage value. use dynamic memory allocation to reserve memory to store marks of each student.

#include <iostream>
using namespace std;
int main (){
    int n,i;
    float *p, sum=0, avg;
    cout<<"Enter number of students: ";
    cin>>n;
    p = new float[n];
    cout<<"Enter marks of students: ";
    for(i=0; i<n; i++){
        cin>>*(p+i);
        sum+=*(p+i);
    }
    cout<<"Entered marks are: ";
    for (i=0; i<n; i++){
        cout<<*(p+i)<<" ";
    }
    avg = sum/n;
    cout<<"\nAverage value of marks: "<<avg;
    delete []p;
    return 0;
    

}