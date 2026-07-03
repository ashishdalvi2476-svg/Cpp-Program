#include <bits/stdc++.h>
using namespace std;

// Max sum from all subarray
void Brute(int arr[], int n)
{
    int sum1 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
                sum1 = max(sum, sum1);
            }
        }
    }

    cout << sum1 << endl;
}

void Better(int arr[], int n)
{
    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            sum1 = max(sum, sum1);
        }
    }

    cout << sum1 << endl;
}

int maxSubArray(int nums[], int n)
{

    int maxsum = nums[0];
    int sum = nums[0];
    for (int i = 1; i < n; i++)
    {

        // if array contain both positive and negative
        sum = max(nums[i], sum + nums[i]);
        maxsum = max(sum, maxsum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxsum;
}

vector<int> maxSubarray(int arr[],int n){
    int s=0,st=0;
    int e=0;
    int maxsum=arr[0];
    int sum=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>sum+arr[i]){
            sum=arr[i];
            s=i;
        }
        else{
            sum+=arr[i];
        }

        if(sum>maxsum){
            maxsum=sum;
            s=st;
            e=i;
        }
    }

    vector<int> ans;
    for(int i=s;i<=e;i++){
        ans.push_back(arr[i]);
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Brute(arr, n);
    Better(arr, n);
    int c = maxSubArray(arr, n);
    cout << c << endl;
}
