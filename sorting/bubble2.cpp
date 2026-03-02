#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
int arr[n]={1,2,3,4,5};
int s=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                s=1;
            }
            if(s==0){
                break;
            }
            cout<<"runs"<<endl;
        }
    }
    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
