#include <bits/stdc++.h>
using namespace std;

void markrow(vector<vector<int>> &arr, int i, int n, int m)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void markcolumn(vector<vector<int>> &arr, int j, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void Brute(vector<vector<int>> &arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                markrow(arr, i, n, m);
                markcolumn(arr, j, n, m);
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {
            if (arr[k][l] == -1)
            {
                arr[k][l] = 0;
            }
        }
    }
}

void Better(vector<vector<int>> &arr, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size(); // total number of rows
    int cols = matrix[0].size();
    int col0 = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            matrix[i][0] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[0][j] = 0;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // mark matrix as arr
    // 	Brute(arr,n,m);

    // Better(arr, n, m);

    setZeroes(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
