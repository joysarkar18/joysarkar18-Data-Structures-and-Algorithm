#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return(n+sum(n-1));
}
int main(int argc, char const *argv[])
{
    int n ; 
    cout<<"Enter your number : ";
    cin>>n;

    cout<< "Your sum = "<<sum(n)<<endl ;
    
    return 0;
}
