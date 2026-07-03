#include <bits/stdc++.h>
using namespace std;

bool ls(int arr[], int n, int target)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == target)
        {
            return true;
        }
    }
    return false;
}
int Brute(int arr[], int n)
{
    int longest = 0;
    int cnt, x;

    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        cnt = 1;

        while (ls(arr, n, x + 1))
        {
            x = x + 1;
            cnt += 1;
        }

        longest = max(cnt, longest);
    }

    return longest;
}

int Better(int arr[], int n)
{
    int maxi = 1;
    int lastmin = INT_MIN;
    int curcnt = 1;

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastmin)
        {
            lastmin = arr[i];
            curcnt++;
        }
        else if (arr[i] != lastmin)
        {
            curcnt = 1;
            lastmin = arr[i];
        }
        maxi = max(maxi, curcnt);
    }

    return maxi;
}

int optimal(int arr[], int n)
{

    int x1, cnt1 = 0;
    int maximum = 1;
    unordered_set<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.insert(arr[i]);
    }

    for (auto it : ans)
    {
        if (ans.find(it - 1) == ans.end())
        {
            cnt1 = 1;
            x1 = it;

            while (ans.find(x1 + 1) != ans.end())
            {
                x1 = x1 + 1;
                cnt1 += 1;
            }
        }

        maximum = max(maximum, cnt1);
    }

    return maximum;
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

    // cout<<Brute(arr,n)<<endl;
    cout << Better(arr, n) << endl;
    cout << optimal(arr, n) << endl;
}