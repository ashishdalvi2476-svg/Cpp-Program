#include<bits/stdc++.h>
using namespace std;
// there are two types of function 
// 1.void = does not return anything 
// 2. function that return something  
int add(int* x,int* y){
    *x=90;
    int sum=*x+*y;
return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    int addition=add(&a,&b);
    cout<<addition<<endl;
    cout<<a;
    return 0;
}

// pass by value = passes a copy to a function and can't be modified in main function
// pass by refrence = passes adddress of that variable and can be modified in main function 