#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    sort(arr.begin(),arr.end());

    string ans="";
    string first=arr[0],last=arr[arr.size()-1];

    for(int i=0;i<first.size();i++){
        if(first[i]==last[i]){ ans+=first[i]; }
        else{ break; }
    }    

    return ans;
}
