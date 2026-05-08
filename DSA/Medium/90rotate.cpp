#include <bits/stdc++.h>
using namespace std;

void Brute(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    int m = ans.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // 	Brute(arr);
    rotateMatrix(arr);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}