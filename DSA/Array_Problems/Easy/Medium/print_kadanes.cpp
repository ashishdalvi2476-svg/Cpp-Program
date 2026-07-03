// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        long long sum=0,max_sum=0;
        int st=-1,end=-1;
        
        int temp=0;
        
        for(int i=0;i<arr.size();i++){
           
            
            if(arr[i]<0){
                sum=0;
                temp=i+1;
            }
            else{
                 sum+=arr[i];
            }
            
            if(sum>max_sum){
                max_sum=sum;
                st=temp;
                end=i;
            }
            
            else if(sum==max_sum){
                if((end-st)<(i-temp)){
                    st=temp;
                    end=i;
                }
            }
        }
        
        if(st==-1){ return {-1}; }
        
        vector<int> ans;
        for(int i=st;i<=end;i++){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};
