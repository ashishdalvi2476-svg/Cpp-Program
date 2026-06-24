#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int n, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void brute(int arr[], int n, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    else
    {
        int mid = low + (high - low) / 2;

        brute(arr, n, low, mid);
        brute(arr, n, mid + 1, high);
        merge(arr, n, low, mid, high);
    }
}

void Counter(int arr[], int n)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    for (int j = 0; j < cnt0; j++)
    {
        arr[j] = 0;
    }
    for (int k = cnt0; k < (cnt0 + cnt1); k++)
    {
        arr[k] = 1;
    }
    for (int h = (cnt0 + cnt1); h < n; h++)
    {
        arr[h] = 2;
    }
}

void DutchNational(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

    // brute(arr,n,0,n-1);
    //  Counter(arr,n);
    DutchNational(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }
}
