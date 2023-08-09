#include <iostream>
using namespace std;
struct Student  //struct is public
{
    int id;
    char name[18];
    void getdata() //if we immideatly define function dont use;
    {
        cout << "Enter name and id :--";
        cin >> name >> id;
        cout << "name :-- " << name << endl;
        cout << "id :-- " << id << endl;
    }
} s; // s is structure variable u can use anything
int main()
{
    s.getdata();

    return 0;
}
