// Brute Force

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

    int n=arr.size();
    int len=0;

    for(int i=0;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
        sum+=arr[j];

        if(sum==0){
          len=max(len,j-i+1);
        }
      }
    }

    return len;
}

// Optimal Solution

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

    int n=arr.size();
    int len=0;
  int sum=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
      sum+=arr[i];

      if(sum==0){
        len=max(len,i+1);
      }

      if(mpp.find(sum)!=mpp.end()){
        len=max(len,(i-mpp[sum]));
      }
      else{
      mpp[sum]=i;
      }

}
    return len;
}
