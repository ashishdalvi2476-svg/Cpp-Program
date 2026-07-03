#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // t.c = nlogn+n
    vector<int> v={1,2,3,3,2,2};
    sort(v.begin(),v.end());
    set<int> s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }

    vector<int> arr;
    for(auto it:s){
        arr.push_back(it);
    }
    
    for(auto i:arr){
        cout<<i<<" ";
    }
    
}
