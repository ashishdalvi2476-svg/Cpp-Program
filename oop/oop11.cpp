#include <bits/stdc++.h>
using namespace std;
// use of static data members inside a class
class employee
{
    int id;
    static int count; // count is ststic data member in class
public:
    void getdata()
    {
        cout << "ID :";
        cin >> id;
        count++;
    }
    void display()
    {
        cout << "ID of Employee " << count << " is : " << id << endl;
    }
    static void get()
    {
        // static function only access stasic members not the data
        // cout<<id;  ->  gives error
        cout << "count is : " << count << endl;
    }
};
// for static variable used in class declere it after class
int employee::count; // default value is 0
int main()
{
    employee e1, e2, e3;
    e1.getdata();
    e1.display();
    e1.get();

    e2.getdata();
    e2.display();
    e2.get();

    e3.getdata();
    e3.display();
    e3.get();
    return 0;
}