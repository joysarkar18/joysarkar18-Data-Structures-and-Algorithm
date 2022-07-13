#include<bits/stdc++.h>
using namespace std;
string moveAllx(string s){
    if (s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = moveAllx(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }

}
int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter your string : ";
    cin>>str;
   cout<<moveAllx(str)<<endl;
    
    return 0;
}
