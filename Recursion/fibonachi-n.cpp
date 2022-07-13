#include<bits/stdc++.h>
using namespace std;
int fib( int n){
    if(n==0){
        return 0;
    }
    if ( n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter your position in fibonachi serice : ";
    cin>>n;
    cout<<"answer = "<<fib(n)<<endl;
    return 0;
}
