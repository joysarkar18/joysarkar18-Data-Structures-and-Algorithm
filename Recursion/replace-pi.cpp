#include<bits/stdc++.h>
using namespace std;

void pi(string s){
    if(s.length()==0){
        return;

    }

    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        pi(s.substr(2));
    }
    else{
        cout<<s[0];
        pi(s.substr(1));
    }
}

int main(int argc, char const *argv[])
{
    string str;
    cout<< "Enter your string : " ;
    
    cin>>str;
    pi(str);
    return 0;
}
