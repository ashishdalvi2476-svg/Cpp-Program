#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int arr[5]={1,0,2,0,4};
    vector<int> temp;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    
    for(int j=0;j<temp.size();j++){
        arr[j]=temp[j];
    }
    
    for(int k=temp.size();k<n;k++){
        arr[k]=0;
    }
    
    for(int i:arr){
        cout<<i<<" ";
    }
}