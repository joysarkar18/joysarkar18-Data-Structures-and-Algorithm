#include<bits/stdc++.h>
using namespace std;
void subString(string s , int n){
    for ( int i=0 ; i <n ; i++){
        for(int j =1 ; j<=n-i ; j++){
            cout<<s.substr(i,j)<<endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cout<< "Enter your string : " ;
    
    cin>>s;
    subString(s,s.length());
    return 0;
}
