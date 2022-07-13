#include<iostream>
using namespace std;
int octalTOdecimal(int n)
{
    int ans=0;
    int k =1;
    while (n>0)
    {
       int lastdig = n%10 ;
       ans = ans + lastdig*k ;
       k = k*8 ;
       n/=10 ;
    }
    return ans ;
}
int main(int argc, char const *argv[])
{
    int n ;
    cout<<"Enter your Bainary number : ";
    cin>>n;
    cout<<octalTOdecimal(n);

    return 0;
}
