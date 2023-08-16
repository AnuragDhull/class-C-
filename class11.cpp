#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    public:
    int id;
    string name;
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
    student s1;
    student s2;
    s1.insert(201,"anurag");
    s2.insert(202,"namit");
    s1.display();
    s2.display();

    return 0;
}