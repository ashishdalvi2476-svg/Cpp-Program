// for array which contain +ve & -ve
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum=0;
    long long max_sum=0;

    for(int i=0;i<n;i++){
        sum
    }

    return max_sum;
}


// for array which contain +ve & -ve as well as all -ve
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int max_sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            sum=max(nums[i],sum+nums[i]);
            max_sum=max(sum,max_sum);
        }

        return max_sum;
    }
};
