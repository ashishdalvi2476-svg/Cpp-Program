#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int> &v,int n){
    if(n==1){return;}
    else{
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                }
            }
        }
    }
    
    bubble(v,n-1);
}
int main() {

    vector<int> v={5,6,3,4,2,1};
    bubble(v,v.size());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
