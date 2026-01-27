#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    double balance;
    public:
    string name ;
    long   accno;
    // parameterized constructor 
    BankAccount(string name,long accno,double balance){ // constructor = used to initialize all the details 
        this->name = name;
        this->accno = accno;
        this->balance = balance;
    }

    // copy (default) constructor 
    BankAccount(BankAccount &acc){
        this->name=acc.name;
        this->accno=acc.accno;
        this->balance=acc.balance;
    }
    
    void  getdata(){
        cout<<" Name : "<<name<<endl;
        cout<<" Account Number : "<<accno<<endl;
        cout<<" Balance : "<<balance<<endl; 
    }
    
};
int main()
{
BankAccount acc1("Ashish",787615998,25000);
acc1.getdata();
BankAccount acc2(acc1);
acc2.getdata();

return 0;
}