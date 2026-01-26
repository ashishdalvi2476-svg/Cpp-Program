#include<bits/stdc++.h>
using namespace std;
int main(){
    int g;
    cin>>g;
    if(g>=80 && g<=100){
        cout<<"A"<<endl;
    }
    else if(g>=60 && g<=79){
        cout<<"B"<<endl;
    }
    else if(g>=50 && g<=59){
        cout<<"C"<<endl;
    }
    else if(g>=45 && g<=49){
        cout<<"D"<<endl;
    }
    else if(g>=25 && g<=44){
        cout<<"E"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
    return 0;
}