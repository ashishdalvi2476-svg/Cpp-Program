#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
	int n=5;
	int arr[n]={1,2,3,4,5};
	
	int s1=0;
	int e1=n-1;
	while(s1<=e1){
	    int temp1=arr[s1];
	    arr[s1]=arr[e1];
	    arr[e1]=temp1;
	    s1++;
	    e1--;
	}
	int s2=0;
	int e2=k;
	while(s2<=e2){
	    int temp2=arr[s2];
	    arr[s2]=arr[e2];
	    arr[e2]=temp2;
	    s2++;
	    e2--;
	}
	
	int s3=n-k;
	int e3=n-1;
	while(s3<=e3){
	    int temp3=arr[s3];
	    arr[s3]=arr[e3];
	    arr[e3]=temp3;
	    s3++;
	    e3--;
	}
	
	for(int i:arr){
	    cout<<i<<" ";
	}

}
