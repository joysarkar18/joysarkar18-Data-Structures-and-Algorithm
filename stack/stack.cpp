#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(4);
    st.push(5);
      while(!st.empty()){
          cout<<st.top()<<" ";
          st.pop();
      }
    return 0;
}