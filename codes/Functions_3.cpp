#include<iostream>
using namespace std;
int binaryTOdecimal(int n)
{
    int ans=0;
    int k =1;
    while (n>0)
    {
       int lastdig = n%10 ;
       ans = ans + lastdig*k ;
       k = k*2 ;
       n/=10 ;
    }
    return ans ;
}
int main(int argc, char const *argv[])
{
    int n ;
    cout<<"Enter your Bainary number : ";
    cin>>n;
    cout<<binaryTOdecimal(n);

    return 0;
}
