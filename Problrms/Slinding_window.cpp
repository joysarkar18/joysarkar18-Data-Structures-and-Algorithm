// This is the brute force aproach it's time complexity is O (nlogn)
// It couls be done in O(n) complexity

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the size of array  : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (auto &a : arr)
    {
        cin >> a;
    }

    int k;
    cout << "Enter the slide : ";
    cin >> k;

    multiset<int, greater<int>> s;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        s.insert(arr[i]);
    }
    ans.push_back(*s.begin());
    int x = n - 1;

    for (int i = k; i < n; i++)
    {
        s.erase(s.lower_bound(arr[(n - 1) - x]));
        s.insert(arr[i]);
        ans.push_back(*s.begin());
        x--;
    }

    for (auto v : ans)
    {
        cout << v << " ";
    }

    return 0;
}