#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    public:
    int id;   //data member also instance variable
    string name;   //data member also instance variable
    void insert (int i,string n)
    {
        id=i;
        name=n;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};
int main(void){
    student s1;  // creating object
    student s2;  // creating object
    s1.insert(201,"anurag");
    s2.insert(202,"namit");
    s1.display();
    s2.display();

    return 0;
}