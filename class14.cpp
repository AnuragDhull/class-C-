#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    enum days{sun,mon,tues,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<"\t"<<day2;
    if(day1>day2)
    {
        cout<<"day 1 comes after day 2";

    }
    else
    {
        cout<<"days come before day 2 ";
    }
}