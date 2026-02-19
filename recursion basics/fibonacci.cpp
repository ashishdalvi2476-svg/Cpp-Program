#include <bits/stdc++.h>
using namespace std;
int fibonacci(int x){
    
    if(x<=1){return x;}
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main() {
    for(int i=0;i<5;i++){
   cout<<fibonacci(i);
}
}
