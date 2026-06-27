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

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int x) {
		vector<vector<int>> ans;

        sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){ continue; }

        int j=i+1,k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];

            if(sum<x){ j++; }
            else if(sum>x){ k--; }
            else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && arr[j-1]==arr[j]){ j++; }
                while(j<k && arr[k+1]==arr[k]){ k--; }
            }
        }
    }

    return ans;
}
