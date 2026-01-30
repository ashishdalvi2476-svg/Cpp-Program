#include<bits/stdc++.h>
using namespace std;
//4 + 4 = 8
// c1+c2 -> then we need to overload this operator + 

struct ytchannel {
    string name;
    int sub;
    ytchannel(string name,int sub){
        this->name=name;
        this->sub=sub;
    }

};
// overloaded globally 
ostream& operator<<(ostream &COUT,ytchannel &ytt){
    COUT<<"NAME : "<<ytt.name<<endl;
    COUT<<"SUB : "<<ytt.sub<<endl;
    return COUT;
}
int main()
{
struct ytchannel yt1("ashish",67000);
struct ytchannel yt2("om",90000);

cout<<yt1<<yt2;
return 0;
}