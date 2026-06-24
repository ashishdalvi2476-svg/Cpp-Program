#include<bits/stdc++.h>
using namespace std;
// class = blueorint of entities 
// object = entities in real world 
// member functions = function declered inside class 
class teacher{
    public:
        string name;
        string dept;
   private:
        double salary;
   public:
        void display(string name,double salary,string dept);
        void changedept(string newdept){
            dept = newdept;
            cout<<"New Department : "<<newdept<<endl;
   }
};
void teacher::display(string name1,double salary1,string dept1){
   cout<<"Name :"<<name1<<endl;
   cout<<"Salary :"<<salary1<<endl;
   cout<<"Department : "<<dept1<<endl;
}
int main()
{
teacher t1;
// t1.salary=30000; -> private member cant be accessible
t1.changedept("CSBS");
t1.display("Ashish",25000,"CS");
return 0;
} 
// access modifiers 
/*
1.private : data & method accessible inside class only 
2.public : data & methods accessible to everyone 
3.prtected : data & methods accessible inside class as well as to its derived class 
*/
// indirect method to access private member :
// setter = setdata() & getter = getdata() 
