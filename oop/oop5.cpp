#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    double *cgpaptr;

    student(string name,double cgpa){
        this->name=name;
        cgpaptr =new double; // dynamic memory allocation
        *cgpaptr=cgpa;
    }
    student (student &s){
        this->name=s.name;
        this->cgpaptr=s.cgpaptr;
    }
    void getdata(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};
int main()
{
    // s1 & s2 points to the same address after changing value of s2.cgpa s1.cgpa also changes 
    // this is the problem with shallow copy 
    student s1("Ashish Dalvi",8.9);
student s2(s1);
*s2.cgpaptr=9.8;
s1.getdata();
s2.getdata();
return 0;
}