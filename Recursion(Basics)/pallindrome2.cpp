#include <bits/stdc++.h>
using namespace std;
bool check(string &x,int s){
    if(s>=x.length()/2){return true;}
   if(x[s]!=x[x.length()-s-1]){return false;}
       return check(x,s+1);
   
}
int main() {
	// your code goes here
    string a="pos";
    string b=a;
    bool is=check(a,0);
    
    if(is){cout<<"Pallindrome"<<endl;}
    else{
        cout<<"Not Pallindrome"<<endl;
    }
}
