#include<bits/stdc++.h>
using namespace std;
class Fraction{
    double x,y=1;
    public:
        Fraction(double x,double y){
            this->x=x;
            this->y=y;
        }
       bool operator==(Fraction& f){
        return (x*f.y==y*f.x);
       }
};
int main()
{
Fraction f1(2,3);
Fraction f2(3,2);
cout<<(f1==f2);
return 0;
}
