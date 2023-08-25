#include <iostream>
#include <iomanip>
using namespace std;

void fun1(int a, int b)
{
    a = a + 2;
    b = b + 2;
    cout << "call by value";
    cout << a << endl<< b ;
        
}

void fun2(int *c, int *d)
{
    *c = *c + 2;
    *d = *d + 2;
    cout << "call by adress";
    cout << c << endl << d;
}


void fun3(int &n, int &m)
{
    n=n+2;
    m=m+2;
    cout<<"call function by reference";
    cout<<n<<endl<<m<<endl;
}


int main()
{
    int x, y;
    cout << "enter data :---";
    cin >> x >> y;
    fun1(x, y);
    cout << "value after fun1 call";
    cout << x << endl << y;
         

    fun2(&x, &y);
    cout << "value after fun2";
    cout << x << endl << y;

    fun3(x,y);
    {
      cout<<"value after fun3";
      cout<<x<<endl<<y;
    }    
}