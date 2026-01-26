#include<bits/stdc++.h>
using namespace std;
int main(){
    // inverted right angled triangle
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            // or can use j=i;j<=n;j++
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}