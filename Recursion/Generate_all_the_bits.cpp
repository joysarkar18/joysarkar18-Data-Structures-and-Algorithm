#include<bits/stdc++.h>
using namespace std;
char s[32];
void ALLbits(int n){
    if(n<1){
       cout<<s<<endl;
    }
    else{

    s[n-1]='0';
    ALLbits(n-1);
    s[n-1] = '1';
    ALLbits(n-1);
    }


}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    ALLbits(n);

    return 0;
}