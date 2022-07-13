#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s; 
    sort(s.begin() , s.end());
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}