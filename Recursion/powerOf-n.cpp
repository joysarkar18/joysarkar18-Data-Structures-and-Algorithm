#include<bits/stdc++.h>
using namespace std;
int power(int n , int p){
    if(p==0){
        return 1;
    }
    return (n*power(n , p-1));
}
int main(int argc, char const *argv[])
{
    int n,p;
    cout<<"Enter your number : ";
    cin>>n;
    cout<< "Enter the power : " ;
    cin>>p;
    
     cout<<"answer = "<<power(n,p)<<endl;
    return 0;
}
