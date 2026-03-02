#include <bits/stdc++.h>
using namespace std;
int part(vector<int> &v,int low,int high){
    int pivot=low;
    
    int i=low;
    int j=high;
    
    while(i<j){
        while(v[i]<=v[pivot] && i<=high-1){i++;}
        while(v[j]>=v[pivot] && j>=low+1){j--;}
        
        if(i<j){swap(v[i],v[j]);}
        
        swap(v[j],v[pivot]);
    }
    return j;
}
void qs(vector<int> &v,int low ,int high){
    if(low<high){
        int pidx=part(v,low,high);
        qs(v,low,pidx-1);
        qs(v,pidx+1,high);
    }
}
int main() {
	vector<int> v={5,4,3,1,2};
	qs(v,0,v.size()-1);
	
	for(int i:v){
	    cout<<i<<" ";
	}
	cout<<endl;

}
