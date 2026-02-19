#include <bits/stdc++.h>
using namespace std;
void check(string &x,int s,int e){
    if(s>=e){return;}
    else{
        swap(x[s],x[e]);
        check(x,s+1,e-1);
    }
}
int main() {
	// your code goes here
    string a="madam";
    string b=a;
    check(a,0,a.length()-1);
    
    if(b==a){cout<<"Pallindrome"<<endl;}
    else{
        cout<<"Not Pallindrome"<<endl;
    }
}
