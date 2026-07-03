#include <bits/stdc++.h>
using namespace std;

void brute(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}

void better(int arr[], int n, int k)
{
    int diff = 0;
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        diff = k - arr[i];

        if (hash.find(diff) != hash.end())
        {
            cout << hash[diff] << " " << i << endl;
        }
        else
        {
            hash[arr[i]] = i;
        }
    }
}

void optimal(int arr[], int n, int k)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == k)
        {
            cout << "Yes" << endl;
            i++;
            j--;
        }

        else if (sum > k)
        {
            j--;
        }
        else if (sum < k)
        {
            i++;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
int main()
{
    int k;
    cin >> k;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    brute(arr, n, k);
    better(arr, n, k);
    optimal(arr, n, k);
}