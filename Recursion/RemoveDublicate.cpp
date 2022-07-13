#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    set<char>v;
    for(int i =0 ; i < s.length() ; i++){
        v.insert(s[i]);

    } 

    for(auto itr : v ){
        cout<<itr;
    }
    return 0;
}