#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int j=0;
       for(int i1=i;i1<n;i1++){
        if(nums[i1]!=0){
            swap(nums[i1],nums[j]);
            j++;
        }
       }
    }
int main()
{
vector<int> nums={1,0,2,0,4};
moveZeroes(nums);

for(int i:nums){
    cout<<i<<" ";
}
return 0;
}