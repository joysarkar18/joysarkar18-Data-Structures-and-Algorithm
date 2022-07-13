#include <bits/stdc++.h>
using namespace std;

void reversal(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
    int main(int argc, char const *argv[])
    {
        int n;
        cout << "Enter your number of element of array : ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Enter the number you want to rotate : ";
        int d;
        cin >> d;

        reversal(arr, 0, d-1);
        reversal(arr, d, n - 1);
        // reversal(arr, 0, n - 1);

        cout << "your array : ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }
