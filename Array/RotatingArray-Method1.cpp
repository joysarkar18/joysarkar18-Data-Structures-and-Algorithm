#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of of elements in the array : ";
    cin >> n;
    int arr[n + 4];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the elements you want to rotate : ";
    cin >> d;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + d];
    }
    int q = 0;
    int j = n - d;
    while (j < n && q < d)
    {
        arr[j] = temp[q];
        j++;
        q++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
