#include <bits/stdc++.h>
using namespace std;
int sum1(int n,int sum){
    if(n==0){return sum;}
    else{
    sum+=n;
    return sum1(n-1,sum);
    }

}
int main() {
    cout<<	sum1(5,0);

}
