#include<bits/stdc++.h>
using namespace std;

// Print 1 to n using recursion

void func(int i,int n){
    if(i>n){return;}
    else{
        // cout<<"Ashish"<<endl;
        cout<<i<<endl;
        func(i+1,n);
    }
}
int main()
{
func(1,8);
return 0;
}