#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    if (a>b){

    
    while(b!=0){
        int rem= a%b;
        a=b;
        b=rem;
    }
   
    return a;

    }

    else{
      
    while(a!=0){
        int rem= b%a;
        b=a;
        a=rem;
    }

    return b;

    }
}

int main(int argc, char const *argv[])
{
    int x , y;
    cout<< "Enter your two numbers : " ;
    cin>>x>>y;

    cout<<"ans = "<<gcd(x,y)<<endl;
    
    return 0;
}
