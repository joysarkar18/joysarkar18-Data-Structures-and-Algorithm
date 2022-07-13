#include <bits/stdc++.h>
using namespace std;

bool is_safe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < n; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool N_queen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (is_safe(arr, x, i, n))
        {
            arr[x][i] = 1;
            if (N_queen(arr, (x + 1), n))
            {
                return true;
            }

            arr[x][i] = 0;
        }
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter your number : ";
    
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    cout << endl;

    if (N_queen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}