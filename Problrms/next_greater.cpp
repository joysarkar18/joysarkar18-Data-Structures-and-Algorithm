//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;

vector<int> next_Greater(vector<int> v){
    stack<int> st;
    vector<int> ans;
    for(int i = v.size()-1 ; i>=0 ; i--){
        while(!st.empty() and st.top()<= v[i]){
            st.pop();
        }

        if(st.empty()){
            ans.push_back(-1);
        }

        else{
            ans.push_back(st.top());
        }

        st.push(v[i]);
    }

    reverse(ans.begin() , ans.end());

    return ans;
}

int main()
{

    vector<int> v= {2,4,1,5,6,7,3,4,8,9};

    vector<int> ans = next_Greater(v);
     for(auto it : ans){
        cout<<it<<" ";
     }
    cout<<endl;
    
    return 0;
}