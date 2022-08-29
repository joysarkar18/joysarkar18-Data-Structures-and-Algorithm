// Code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;

int partion(int arr[], int l, int r)
{
    int lev = arr[r];
    int i = l - 1;
    int j = l;
    while (j < r)
    {
        if (arr[j] < lev)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partion(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
