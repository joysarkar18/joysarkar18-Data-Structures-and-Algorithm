#include<iostream>
#include <string.h>
using namespace std;
int hexaTodesimal(string n){
    int ans=0;
    int k=1;
    int s = n.size();
    for (int i = s-1 ; i >=0 ; i--)
    {
      if(n[i]>='0'&& n[i]<='9'){
          ans= ans + k*(n[i]-'0');
      }
      else if(n[i]>='A'&& n[i]<='F'){
          ans+= k*(n[i]-'A'+10);
      }
      k*=16;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string n;
    cin>>n;
    cout<< hexaTodesimal(n);
    return 0;
}
