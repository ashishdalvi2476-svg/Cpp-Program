#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    vector<int> ans;
    int maximum=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(elements[i]>maximum){
        ans.push_back(elements[i]);
        }
        maximum=max(maximum,elements[i]);

    }
    reverse(ans.begin(),ans.end());
    return ans;
}
