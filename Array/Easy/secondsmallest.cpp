#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> v={5,6,7,4,7,8};

int smallest=v[0],secondsmallest=INT_MAX;

for(int i=0;i<v.size();i++){
    if(v[i]<smallest){
        secondsmallest=smallest;
        smallest=v[i];
       
    }
}

cout<<secondsmallest<<endl;
}
