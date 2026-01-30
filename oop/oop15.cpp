#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void getdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
    // + overloading
    Complex operator+(Complex &c)
    {
        return Complex((a + c.a), (b + c.b));
    }
    // - overloading
    Complex operator-(Complex &c)
    {
        return Complex((a - c.a), (b - c.b));
    }
    friend ostream &operator<<(ostream &Cout, Complex &c);
};
// << overloaded
ostream &operator<<(ostream &Cout, Complex &c)
{
    Cout << c.a << "+" << c.b << "i" << endl;
    return Cout;
}
int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c1.getdata();
    // c2.getdata();
    cout << c1;

    cout << "Sum is : ";
    c3.getdata();

    cout << "Sub is : ";
    c4.getdata();

    return 0;
}