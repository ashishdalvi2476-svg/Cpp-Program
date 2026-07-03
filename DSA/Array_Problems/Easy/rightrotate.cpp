#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    int n=5;
    int arr[n]={1,2,3,4,5};
    k=k%n;
    vector<int> temp(k);
    // temp array
    
    for(int i=n-k;i<n;i++){
        temp[i-(n-k)]=arr[i];
    }
    
    // shifting
    
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    
    // rotation
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    
    for(int b=0;b<n;b++){
        cout<<arr[b]<<" ";
    }
}
