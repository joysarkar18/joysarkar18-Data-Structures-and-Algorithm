#include<bits/stdc++.h>
using namespace std;

void reverseString(string s){
    stack<string>ans;
    for (int i = 0; i < s.length(); i++)
    {  
        string word="";
      while(s[i]!=' '&& i<s.length()){
          word+=s[i];
          i++;

      }
      ans.push(word);
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    
}
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    reverseString(s);

    return 0;
}