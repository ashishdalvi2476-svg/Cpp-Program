#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    // indirect accessing privaate members 
    private:
    double balance;
    public:
    void setdata(double balance1){
        balance=balance1;
    }
    double  getdata(){
        return balance;
    }
    
};
int main()
{
BankAccount MyAccount;
MyAccount.setdata(1000);
cout<<"Balance Is : "<<MyAccount.getdata()<<endl;
return 0;
}