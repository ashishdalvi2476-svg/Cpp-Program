#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
int arr[n]={29, 10, 14, 37, 13};
// check for pattern 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
