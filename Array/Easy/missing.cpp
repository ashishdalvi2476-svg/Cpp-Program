#include <bits/stdc++.h>
using namespace std;

// Brute force 
int Hash(int arr[],int n){
    vector<int> hash(n+1,0);
    
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    
    for(int j=1;j<=n;j++){
        if(hash[j]==0){
            return j;
        }
    }
}

// Optimal Solution

int Sum(int arr[],int n){
    int s1=(n*(n+1)) / 2;
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2+=arr[i];
    }
    
    return s1-s2;
}

int XOR(int arr[],int n){
    int x1=0;
    int x2=0;
    
    for(int i=0;i<n-1;i++){
        x2=x2^arr[i];
        x1=x1^(i+1);
    }
    
    x1^=n;
    
    return x1^x2;
}

int Myself(int arr[],int n){
    int i=0;
    for(int j=1;j<=n;j++){
        if(arr[i]==j){
            j++;
        }
        
        else{ return j;}
    }
}

int main() {
	int n1;
	cin>>n1;
	
	int arr[n1];
	for(int i=0;i<n1-1;i++){
	    cin>>arr[i];
	}
	
	cout<<Hash(arr,n1)<<endl;
	cout<<Sum(arr,n1)<<endl;
	cout<<XOR(arr,n1)<<endl;
	cout<<Myself(arr,n1)<<endl;
}
