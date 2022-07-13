#include <bits/stdc++.h>
using namespace std;
void revese_k_node(list<int> l, int k)
{
    list<int> ans;
    stack<int> st;
    while (!l.empty())
    {
        for(int i = 0 ; i< k ; i++){
            if(!l.empty()){

            st.push(l.front());
            l.pop_front();
            }
        }

        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }

    
}

void display(list<int> l3)
{
    while (!l3.empty())
    {
        cout << l3.front() << " ";
        l3.pop_front();
    }
}
int main(int argc, char const *argv[])
{
    list<int> l1 = {1, 4, 90};
    list<int> l2 = {2, 3, 80, 120};
    l1.merge(l2);
    l1.sort();
    //  list<int> l3 = revese_k_node(l1 , 2);
   revese_k_node(l1,2);

    return 0;
}