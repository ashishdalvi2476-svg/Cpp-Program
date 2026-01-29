#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        int age;
    // overriding = same function but different implemntation
    // object creation decides the priority  
        void getdata(){
            cout<<"Parent class "<<endl;
        }
};
// student class overrides person class 
class student : public person{
    public:
         void getdata(){
            cout<<"child class "<<endl;
        }
};
int main()
{
student s;
s.getdata();
return 0;
}