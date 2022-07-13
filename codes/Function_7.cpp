#include<bits/stdc++.h>
using namespace std ;
long long decimalTooctal( int n){
    long long ans =0 ;
    int k =1;
    int rimender;
    while(n!=0){
        rimender= n%8;
        ans+= k*rimender ;
        n/=8 ;
        k*=10;

    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n ;
    cout<<"Enter your input : ";
    cin>>n;
    cout<<decimalTooctal(n);

    return 0;
}
