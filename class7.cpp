#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];    //Class is pvt. so i make it public 
    public:           //using public:
    void readdata();
};
void student::readdata()
{
    cout<<"Enter your name and id :--";
    cin>>name>>id;
    cout<<"name :-"<<name<<endl;
    cout<<"id :-"<<id<<endl;
}
int main()
{
    student s;   // s is object name
    s.readdata();
    return 0;
}