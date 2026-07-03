#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1=5;
    int n2=6;
    int arr[n1]={1,2,3,4,5};
    int brr[n2]={1,2,3,6,7,8};
    
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr[i]);
    }
    
    for(int i=0;i<n2;i++){
        s.insert(brr[i]);
    }
    vector<int> unionarr;
    for(auto it:s){
        unionarr.push_back(it);
    }
    
    for(int j:unionarr){
        cout<<j<<" ";
    }
}
