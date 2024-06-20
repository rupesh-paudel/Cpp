//wap to read 2*3 matrix and display their sum
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[2][3], b[2][3], sum[2][3], i,j;
    cout<<"enter the value of first matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"enter the value of second matrix"<<endl;
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }}
        cout<<"the sum of matrix is"<<endl;
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum[i][j]= a[i][j]+b[i][j];
            cout<<setw(6)<<sum[i][j]; // It sets the width of the next input field to 6 characters.
        }
        cout<<endl;
        }
        
return 0;
}