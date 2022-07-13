#include<iostream>
using namespace std;
int sum(int n){
    return (n*(n+1))/2 ;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<endl;
    cout<<sum(n)<<endl;
    return 0;
}
