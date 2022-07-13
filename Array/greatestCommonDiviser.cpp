#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    if( b==0){
        return a;
    }
    else {
        return gcd(b , a%b);
    }
}


int main(int argc, char const *argv[])
{
    int a , b;
    cout<< "Enter the two numbers : " ;
    cin>> a>>b ;
    cout<<"The GCD = "<<gcd(a,b)<<endl;

    
    return 0;
}
