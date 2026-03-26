#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> v={5,6,7,7,8,-9,-78};

int largest=v[0],secondlargest=-1;

for(int i=0;i<v.size();i++){
    if(v[i]>largest && largest>secondlargest){
        secondlargest=largest;
        largest=v[i];
    }
}

cout<<secondlargest<<endl;
}
