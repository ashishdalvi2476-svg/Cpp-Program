#include <bits/stdc++.h>
using namespace std;
class Dmart
{
public:
    string nameofproduct[100];
    double price[100];

    Dmart()
    {
        for (int i = 0; i < 100; i++)
        {
            nameofproduct[i] = "none";
            price[i] = 0;
        }
    }

    
};

class Cart : public Dmart
{
public:
    int n;

    Cart() { n = 0; }
    Cart(int n) : Dmart() { this->n = n; }
    void info()
    {

        cout << "YOUR BILL : " << endl;
        cout << left << setw(10) << "Name" << right << setw(15) << "Price" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << left << setw(15) << nameofproduct[i] << right << setw(10) << price[i] << endl;
        }
        cout << "-----------------------------" << endl;
    }

    double total()
    {
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += price[i];
        }
        return sum;
    }
    friend istream &operator>>(istream &cin, Cart &c);
};
istream &operator>>(istream &Cin, Cart C)
{
    for (int i = 0; i < 100; i++)
    {
        Cin >> C.nameofproduct[i] >> C.price[i];
    }
}
int main()
{
    int x;
    cin >> x;
    Cart c(x);
    for (int i = 0; i < x; i++)
    {
        cin >> c.nameofproduct[i] >> c.price[i];
      
    }
    double y = c.total();
    c.info();
    cout << "Total Bill is : " << y;
    return 0;
}