//wap to read marks percentage in an examination of 10 students. calculate and display the average percentage and deviation percentage from average of each student.
#include<iostream>
using namespace std;
int main(){
    float percentage[10];
    float deviation[10];
    float average,sum=0;
    int i;
    for(i=0;i<10;i++){
        cout<<"enter the percentage of "<<(i+1)<<"th student"<<endl;
        cin>>percentage[i];
        sum += percentage[i];
    }
    average = sum/i;
    cout<<"the average percentage is: "<<average<<endl;

    cout<<"The deviation from each student"<<endl;
    for(i=0;i<10;i++){
        deviation[i] = percentage[i]-average;
        cout<<deviation[i]<<endl;
    }
    return 0;
}