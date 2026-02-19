#include <bits/stdc++.h>
using namespace std;

void reverse(int *s,int *e){
    if(s>=e){return ;}
    else{
        swap(*s,*e);
        reverse(s+1,e-1);
    }
}

int main() {
	// your code goes here
    int a[5]={1,2,3,4,5};
  reverse(a,a+4);
    
    for(int i:a){
        cout<<i<<endl;
    }
}