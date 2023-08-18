#include <iostream>
#include <iomanip>
using namespace std;
enum week{ sunday,monday,tuesday,wednesday,thrusday,friday,saturday};
int main()
{
    week today;
    today=wednesday;
    cout<<"Day "<<today+1;
}