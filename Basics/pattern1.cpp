#include<bits/stdc++.h>
using namespace std;
int main(){
    // square pattern 
    int n=0;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}