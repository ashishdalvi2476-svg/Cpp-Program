#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0,ele=0;

	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			ele=arr[i];
		}
		if(arr[i]==ele){
			cnt++;
		}
		else{
			cnt--;
		}
	}

	int cnt1=0,majority=n/2;
	for(int j=0;j<n;j++){
		if(ele==arr[j]){
			cnt1++;

			if(cnt1>majority){
				return ele;
			}
		}
	}

	return -1;
}
