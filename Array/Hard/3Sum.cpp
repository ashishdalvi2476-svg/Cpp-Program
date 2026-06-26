// Brute Force Approach

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int x) {
	
    set<vector<int>> st;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

// Better Approach

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int x) {
	
    set<vector<int>> st;

    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=i+1;j<n;j++){
            int third=x-(arr[i]+arr[j]);

            if(s.find(third)!=s.end()){
                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }

            s.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

// Optimal Approach

