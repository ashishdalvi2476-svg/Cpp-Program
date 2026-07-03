#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1=6,n2=6;
	int a[n1]={1,2,3,4,5,7};
	int b[n2]={2,3,4,5,6,7};
	
    vector<int> v;
    int i=0;
    int j=0;
    
    while(i<n1 && j<n2){
        if(a[i]==b[j]){
            v.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){ i++;}
        else if(b[j]<a[i]) {j++;}
    }
    
    for(int i : v){
        cout<<i<<" ";
    }
}
