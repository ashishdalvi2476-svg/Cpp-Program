#include<bits/stdc++.h>
using namespace std;
int main(){
    // program to check wheather a person is adult and is eligible for party 

    int age;
    cin>>age;
    if(age<18 && age>0 ){
        cout<<"You are not adult & can't allowed for party "<<endl;
    }
    else if(age==0){
        cout<<"Enter valid age !! "<<endl;
    }
    else{
        cout<<"You are Adult & allowed for party  "<<endl;
    }
    return 0;
}