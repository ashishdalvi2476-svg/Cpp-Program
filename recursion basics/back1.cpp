#include<bits/stdc++.h>
using namespace std;
void back(int n,int i){
    if(n==0){ return;}
    else{
        back(n-1,i);
        cout<<n<<endl;
    }
}
int main()
{
int n=5;
back(5,1);
return 0;
}