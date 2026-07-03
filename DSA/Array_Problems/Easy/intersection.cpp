#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1=5,n2=6;
	int a[n1]={1,2,3,4,5};
	int b[n2]={2,3,4,5,6,7};
	
    vector<int> v;
    int arr[n2]={0};
   for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(a[i]==b[j] && arr[j]==0){
            v.push_back(b[j]);
            arr[j]=1;
            break;
        }
    }
   }
    
    for(int i : v){
        cout<<i<<" ";
    }
}
