#include <bits/stdc++.h>
using namespace std;
// tc = n+n

// note : here as length of array is 6 but to get all the unique element we need to iterate upto j only 
// bcoz upto j there are unique elements and after that the array elements are still in the array
int main() {
    vector<int> v={1,2,3,3,2,2};
    int j=0;
    for(int i=1;i<v.size();i++){
        if(v[j]!=v[i]){
            v[j+1]=v[i];
            j++;
        }
    }
    
    for(int i=0;i<j;i++){
        cout<<v[i]<<" ";
    }
}
