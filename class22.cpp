#include <iostream>
#include <iomanip>
using namespace std;
int global=5;
int main()
{
    int global=2;
    cout<<::global<<endl;

} 