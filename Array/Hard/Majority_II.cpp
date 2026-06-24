// Brute Solution

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
  vector<int> temp;
  int majority=n/3;  

  for(int i=0;i<n;i++){
      if (find(temp.begin(), temp.end(), arr[i]) != temp.end()) {
            continue; 
        }
      int cnt=1;
      for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
              cnt++;

          }
      }
            if(cnt>majority){
                temp.push_back(arr[i]);
            }
  }

  return temp;

}

// Better Solution

vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int> mpp;
    vector<int> temp;
    int n=arr.size();
    int majority=n/3;

    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }

    for(auto it:mpp){
        if(it.second>majority){
            temp.push_back(it.first);
        }
    }

    return temp;

}

// Optimal Solution

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> temp;
    int n=arr.size();
    int majority=n/3;
    int cnt1=0,cnt2=0;
    int ele1=0,ele2=0;

    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=ele2){
            cnt1=1;
            ele1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=ele1){
            cnt2=1;
            ele2=arr[i];
        }

        else if(ele1==arr[i]){ cnt1++; }
        else if(ele2==arr[i]){ cnt2++; }
        else{
            cnt1--;
            cnt2--;
        }
    }

    int cnt_x=0,cnt_y=0;
    for(int i=0;i<n;i++){
        if(ele1==arr[i]){ cnt_x++; }
        else if(ele2==arr[i]){ cnt_y++; }

    }
        if(cnt_x>majority){
            temp.push_back(ele1);
        }
        if(cnt_y>majority){
            temp.push_back(ele2);
        }

    return temp;

}
