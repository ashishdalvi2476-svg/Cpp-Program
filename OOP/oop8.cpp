#include<bits/stdc++.h>
using namespace std;
// compile time polymorphism 
// uses function overloading
class display{
    public:
        void getdata(int x){
            cout<<"int : "<<x<<endl;
        }
         void getdata(char ch){
            cout<<"char : "<<ch<<endl;
        }
};
int main()
{
display d;
d.getdata('h');
return 0;
}
