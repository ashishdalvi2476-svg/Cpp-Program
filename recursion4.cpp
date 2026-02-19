#include <bits/stdc++.h>
using namespace std;

void reverse(int *i,int n){
    if(n<=1){return ;}
    else{
        swap(i[0],i[n-1]);
        reverse(i+1,n-2);
    }
}

int main() {
	// your code goes here
    int a[5]={1,2,3,4,5};
  reverse(a,5);
    
    for(int i:a){
        cout<<i<<endl;
    }
}
