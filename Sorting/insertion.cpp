#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=5;
	int arr[n]={1,2,3,4,5};
	
	for(int i=0;i<n;i++){
	    int j=i;
	    while(j>0 && arr[j-1]>arr[j]){
	        swap(arr[j-1],arr[j]);
	        j--;
	        cout<<"runs"<<endl;
	    }
	}

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
