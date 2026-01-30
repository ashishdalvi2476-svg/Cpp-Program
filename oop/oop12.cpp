#include <bits/stdc++.h>
using namespace std;
// use of array in class
class employee
{
    int id[5];

public:
    void getdata()
    {
        cout << "ID :";
        for (int i = 0; i < 5; i++)
        {
            cin >> id[i];
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "ID of Employee " << i + 1 << " is : " << id[i] << endl;
        }
    }
};
int main()
{
    employee e1, e2, e3;
    e1.getdata();
    e1.display();
    return 0;
}
