#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int low,int mid,int high){
    int left =low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    
     while(right<=high){
        temp.push_back(v[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}

void mergesort(vector<int> &v,int low,int high){
    if(low>=high){return;}
    else{
        int mid=low + (high - low) / 2;
        mergesort(v,low,mid);
        mergesort(v,mid+1,high);
        merge(v,low,mid,high);
    }
}
int main() {
  vector<int> a={5,4,3,2,1};
	mergesort(a,0,a.size()-1);
	
	for(int i : a){
	    cout<<i<<" ";
	}
	cout<<endl;

}
