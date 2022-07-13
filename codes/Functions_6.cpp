#include<bits/stdc++.h>
using namespace std ;
long long decimalTobinary( int n){
    long long ans =0 ;
    int k =1;
    int lastdig;
    while(n!=0){
        lastdig= n%2;
        ans+= k*lastdig ;
        n/=2 ;
        k*=10;

    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n ;
    cout<<"Enter your input : ";
    cin>>n;
    cout<<decimalTobinary(n);

    return 0;
}
