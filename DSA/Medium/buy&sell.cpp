#include <bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int>& arr, int n){
        int minidx=arr[0];
        int maxprofit=0;
        int cost=0;

        for(int i=1;i<n;i++){
            minidx=min(minidx,arr[i]);
            cost=arr[i]-minidx;

            maxprofit=max(maxprofit,cost);
      }

      return maxprofit;
    }
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    int c=stockBuySell(arr,n);
    cout<<c<<endl;

}
