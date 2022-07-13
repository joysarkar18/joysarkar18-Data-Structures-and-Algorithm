#include<bits/stdc++.h>
using namespace std;
void permutation(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    else{
        for (int i=0 ; i<s.length() ;i++){
            char ch=s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros , ans+ch);
        }
    }
}

int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter your string : ";
    cin>>str;
    permutation(str,"");



    return 0;
}
