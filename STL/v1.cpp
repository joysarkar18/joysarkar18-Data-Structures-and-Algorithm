#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v1;
    vector<int>:: iterator it;
    for(int i = 0 ; i < 10 ; i++){
        v1.push_back(i);
    } 
    for(it = v1.begin() ; it!= v1.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<*v1.begin()<<endl;
    for(auto i : v1){
        cout<<&i<<" ";
    }
    return 0;
}