#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=20;
    cout<<hex<<showbase<<n<<'\n';
    cout<<hex<<noshowbase<<n<<'\n';
    return 0;
}