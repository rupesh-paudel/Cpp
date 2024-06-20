#include<iostream>
#using namespace std;
class Box
{
    int l,b,h;
    public:
    void ReadData()
    {
        cout<<"Enter the length,breadth and height:";
        cin>>l>>b>>h;
        {
            void displayvolume(){
                cout<<"volume of the box is:"<<l*b*h;
            }
        }
    }
};
int main(){
    Box ob;
    ob.ReadData();
    ob.DisplayVolume();
    return 0;
}