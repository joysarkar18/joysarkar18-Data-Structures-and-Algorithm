#include<bits/stdc++.h>
using namespace std;

vector<int> previous_larger(vector<int> v, int n)
{

    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and v[st.top()] <= v[i])
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

vector<int> next_larger(vector<int> v, int n)
{
    stack<int> st;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() and v[st.top()] <= v[i])
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

    int sum = 0;

    vector<int> left = previous_larger(v, n);
    vector<int> right = next_larger(v, n);
     for(int i = 0 ; i< n ; i++){
           int left_wall=left[i];
           int right_wall = right[i];
           if(left_wall!=-1 and right_wall!=-1){
             int hight = min(v[left_wall] , v[right_wall]) - v[i];
             int width = right_wall-left_wall-1;
             sum+=(hight*width);
           }
     }

     cout<<"ans = "<<sum<<endl;
    return 0;
}