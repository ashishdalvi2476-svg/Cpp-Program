int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    unordered_map<int,int> mpp;
    mpp[0]=1;

    int presum=0,cnt=0;

    for(int i=0;i<arr.size();i++){
        presum+=arr[i];

        int x=presum-k;
        if(mpp.find(x)!=mpp.end()){
            cnt++;
        }

        mpp[presum]+=1;
    }

    return cnt;
}
