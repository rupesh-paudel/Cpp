//wap that defines an enumerator "days" and enumerates the name of seven days. If the input value from user is 1 or 7 , the message "Holiday" is displayed; otherwise the message "Working Day" is displayed.

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    enum days{
        sunday =1,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

int a;
days b;
cout<<"enter the day of the week (1-7)"<<endl;
cin>>a;
b = days(a);
if(b==sunday || b==saturday){
    cout<<"enjoy! today is holiday"<<endl;

}
else{
    cout<<"sorry! today is not holiday"<<endl;
}
return 0;
}