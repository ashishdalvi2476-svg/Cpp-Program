#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> v={5,6,7,8,-9,-78};

sort(v.begin(),v.end());

int largest=v[0],secondlargest=INT_MIN;
for(int i=0;i<v.size();i++){
    if(v[i]>largest){
        largest=v[i];
    }
}

for(int i=0;i<v.size();i++){
    if(v[i]>secondlargest && v[i]!=largest){
        secondlargest=v[i];
    }
}

cout<<secondlargest<<endl;

}
