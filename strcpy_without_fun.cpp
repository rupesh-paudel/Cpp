//WAP that copies the content if one string to another without using any string related library functions.
#include <iostream>
using namespace std;
int main(){
    char st1[20],st2[20],len,i=1;
    cout<<"enter first string:"<<endl;
    cin>>st1;
    while(st1[i]!='\0')
    {
        i++;
    }
    len = i;
    for(i=0;i<len;i++){
        st2[i]=st1[i];
        }
    st2[i]='\0';
    cout<<"the original string is "<<st1<<endl;
    cout<<"the copied string is "<<st2;
}
