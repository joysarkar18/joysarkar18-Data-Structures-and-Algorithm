#include<bits/stdc++.h>
using namespace std;
void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    stack <int> st;
    for(int i=1 ; i <=5 ;i++){
        st.push(i);
    } 
    display(st);
    stack<int> ans;

    while(!st.empty()){
        ans.push(st.top());
        st.pop();

    }
    display(ans);
    return 0;
}