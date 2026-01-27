#include<bits/stdc++.h>
using namespace std;
class Cooling{
    private:
     double watertemp;
    public:
    void setdata(double temp){
        if(temp>=0 && temp<=100){
            watertemp=temp;
        }
        else if(temp<0){cout<<"The Pipe is Frozen !! "<<endl;}
        else if(temp>100){cout<<"This temperature is dengerous !!"<<endl;}

    }
    double getdata(){
        if(watertemp>=0 && watertemp<=100){
        return watertemp;}
        else{return 1;}
    }
};
int main()
{
Cooling c1;
c1.setdata(500);
double a =c1.getdata();
cout<<a<<endl;
return 0;
}