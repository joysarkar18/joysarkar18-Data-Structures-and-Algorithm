#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter your input : ";
    cin >> n;
    int arr[n];
    cout << "Enter your array  :  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2;

    int pd = arr[  1] - arr[0];
    int current = 2;
    for (int j = 2; j < n ; j++)
    {
        if (arr[j ] - arr[j-1] == pd)
        {
            current++;
        }
        else
        {
          pd = arr[j ] - arr[j-1];
          current=2 ;
        }
    
    ans = max(ans, current);
    }
    cout << "ANS = " << ans << endl;

    return 0;
}
