#include <bits/stdc++.h>
using namespace std;
deque<int> arr;
void All_string(int n, int k)
{
    if (n < 1)
    {

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
        }

        for (int i = 0; i < arr.size(); i++)
        {
            arr.pop_front();
        }

        cout << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {

            arr.push_front(i);
            All_string(n - 1, k);
        }
    }
}
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    All_string(n, k);

    return 0;
}