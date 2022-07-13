#include<bits/stdc++.h>
using namespace std;
long long int fac(int  n ){
    if(n==1){
        return 1;
    }
    return (n*fac(n-1));
}
int main(int argc, char const *argv[])
{
    int n ; 
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"answer = "<<fac(n)<<endl;

    return 0;
}
