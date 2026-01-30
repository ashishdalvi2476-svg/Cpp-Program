#include<bits/stdc++.h>
using namespace std;
class Smartphone{
    public:
    virtual void MakeCall()=0;
    // the main purpose of virtual function is to force derived class to implement the member function with different implementation 
};

class Android:public Smartphone{
public:
    void MakeCall(){
        cout<<"Android Calling "<<endl;
    }
};
class Iphone:public Smartphone{
public:
    void MakeCall(){
        cout<<"Iphone Calling "<<endl;
    }
};
int main()
{
    // abstarct class can't be instantiated but can be pointed 
    Smartphone *s1=new Iphone;
    s1->MakeCall();
return 0;
}