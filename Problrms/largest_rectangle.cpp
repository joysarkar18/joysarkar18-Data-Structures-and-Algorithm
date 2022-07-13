#include <bits/stdc++.h>
using namespace std;
vector<int> previous_smaller(vector<int> v, int n)
{

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

    return ans;
}

vector<int> next_smaller(vector<int> v, int n)
{
    stack<int> st;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() and v[st.top()] >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans.push_back(n);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(i);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

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

    vector<int> left = previous_smaller(v, n);
    vector<int> right = next_smaller(v, n);

    int max_area = 0;
    for (int i = 0; i < n; i++)
    {

        int height = v[i];
        int length = (right[i] - left[i] - 1);
        max_area = max(max_area, (height * length));
    }

    cout << "ans = " << max_area << endl;

    return 0;
}