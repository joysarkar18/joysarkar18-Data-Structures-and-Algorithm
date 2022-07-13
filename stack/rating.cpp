#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{   int t;
     cin>>t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i]!=arr2[i]){
                cout<<"No"<<endl;
                return 0 ;
            }
        }

        cout<<"Yes"<<endl;
    }
    return 0;
}