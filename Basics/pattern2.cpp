#include<bits/stdc++.h>
using namespace std;
int main(){
    // right angle triangle
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}