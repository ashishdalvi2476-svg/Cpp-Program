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
        // for creating deep copy allocate new memory to the cgpaptr
        this->name=s.name;
        cgpaptr=new double; // deep copy 
        *cgpaptr=*(s.cgpaptr);
    }
    void getdata(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};
int main()
{
student s1("Ashish Dalvi",8.9);
student s2(s1);
*(s2.cgpaptr)=9.8;
s1.getdata();
s2.name="Om";
s2.getdata();
return 0;
}
