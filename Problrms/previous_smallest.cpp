#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and v[st.top()] >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (ans[i] == -1)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << v[ans[i]] << " ";
        }
    }

    return 0;
}