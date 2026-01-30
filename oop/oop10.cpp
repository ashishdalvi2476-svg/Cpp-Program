#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    // overriding = same function but different implemntation
    // object decides the priority
    virtual void getdata()
    {
        cout << "Parent class " << endl;
    }
};
// student class overrides person class
class student : public person
{
public:
    void getdata()
    {
        cout << "child class " << endl;
    }
};
int main()
{
    // we can use base class pointer to point towards derived class but only by using virtual keyword
    // but we must use virtual in base class
    person *ptr;
    student s;
    ptr = &s;
    ptr->getdata();
    return 0;
}
