#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    int n=9;
int arr[n]={1,2,3,1,1,2,3,7};

int i=0;
int j=0;
int sum=0;
int len=0;

while(j<n){
    while(sum>k){
        sum-=arr[i];
        i++;
    }
        sum+=arr[j];
        j++;
    
    if(sum==k){
        len=max(len,j-i);
    }
}

cout<<len<<endl;

}
