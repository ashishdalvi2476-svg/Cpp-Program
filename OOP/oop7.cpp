#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        int age;
    person(){
        cout<<"parent constructor !!"<<endl;
    }
    ~person(){
        cout<<"Parent Destructor !!"<<endl;
    }
};
//inheriting person in student 
// first constructor of base class is called then derived class
// first destructor of derived class is called then of base class 
class student : public person{
    public:
        int roll;

    void getdata(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no. : "<<roll<<endl;
    }
    student(){
        cout<<"child constructor !!"<<endl;
    }
    ~student(){
        cout<<"child Destructor !!"<<endl;
    }
};
int main()
{
 student s;
 s.name="Ashish";
 s.age=22;
 s.roll=005;
 s.getdata();
return 0;
}
