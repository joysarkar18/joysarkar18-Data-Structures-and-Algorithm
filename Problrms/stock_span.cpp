//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
vector<int> stock_span(vector<int> v){
    stack<pair<int, int>> st;
    vector<int> ans ;
    for(int i = 0 ; i< v.size() ; i++){
        int days = 1 ;
        while(!st.empty() and st.top().first <= v[i]){
            days+= st.top().second;
            st.pop();
        }

        st.push({v[i] , days});
        ans.push_back(days);
    }

    return ans;
}

int main()
{
   vector<int> v = {100 , 80 , 50 , 60 , 80 , 56};
   vector<int> ans = stock_span(v);
   for(auto it : ans ){
    cout<<it<<" ";
   }

   cout<<endl;
    return 0;
}