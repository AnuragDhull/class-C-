#include <iostream>
#include <iomanip>
using namespace std;
struct emp {
    string name;

};
int main()
{
    emp e[5];
    int i ;
    for(i=0;i<5;i++)
    {
        cout<<"Enter name of Employee"<<i+1<<":";
        cin>>e[i].name;
    }
    cout<<"Name of employee :--"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<e[i].name<<endl;
    }
}

