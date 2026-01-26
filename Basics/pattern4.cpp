#include<bits/stdc++.h>
using namespace std;
int main(){
    // triangle pattern 
    int n;
    cin>>n;
    //understand the logic for printong space 
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            cout<<" ";
        }
            for(int k=0;k<2*i+1;k++){
                cout<<"*";
              }  
        cout<<endl;
    }
    return 0;
}