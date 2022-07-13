#include <bits/stdc++.h>
using namespace std;
bool is_safe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && x >= 0 && y >= 0 && arr[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool maze(int **arr, int x, int y, int n, int **sol)
{
    if (x == n - 1 && y == n - 1)
    {
        sol[n - 1][n - 1] = 1;
        return true;
    }

    if (is_safe(arr, x, y, n))
    {
        sol[x][y] = 1;
        if (maze(arr, x + 1, y, n, sol))
        {
            return true;
        }
        if (maze(arr, x, y + 1, n, sol))
        {
            return true;
        }

        if (maze(arr, x - 1, y, n, sol))
        {
            return true;
        }

        else
        {
            sol[x][y] = 0;
            return false;
        }
    }

    else
    return false;
}

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sol[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            sol[i][j] = 0;
        }
    }

    cout << endl;

    if(maze(arr, 0, 0, n, sol)){
        for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    }

    else{
        cout<<"NO POSSIABLE PATH"<<endl;
    }
   

    return 0;
}