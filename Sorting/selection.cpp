#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
int arr[n]={29, 10, 14, 37, 13};
// note you have to store idx in mini as it is a local variable 
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){min = j;}
        }
        swap(arr[i],arr[min]);
    }
    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
