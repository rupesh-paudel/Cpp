#include<iostream>
#include<iomanip>
using namespace std;
void add(int a[], int sizeOfa){
    int i;
    for(i=0;i<sizeOfa;i++){
        a[i] += 5;
    }
}
int main(){
    int i;
    int nums[3]={1,2,3};
    cout<<"before the function call, the values are"<<endl;
    for(i=0;i<3;i++){
        cout<<setw(2)<<nums[i];
    }
    cout<<endl;

    add(nums, sizeof(nums));
    cout<<"after function call"<<endl;
    for(i=0;i<3;i++){
        cout<<setw(2)<<nums[i];
    }
return 0;
}