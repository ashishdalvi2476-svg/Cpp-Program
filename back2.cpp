#include<bits/stdc++.h>
using namespace std;
void back(int i,int n){
    if(i>n){return;}
    else{
        back(i+1,n);
        cout<<i<<endl;
    }
}
int main()
{
back(1,6);
return 0;
}