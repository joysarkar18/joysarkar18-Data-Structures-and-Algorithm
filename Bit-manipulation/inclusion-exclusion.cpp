#include<bits/stdc++.h>
using namespace std;
int divisable(int n , int a , int b){
    int x = n /a;
    int y = n/b;
    int z = n / (a*b);

    return ( x+y-z);

}

int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter your number :  ";
    cin>>n;
    int a , b; 
    cout<< " enter your divisers " <<endl;
    cin>>a>>b;
    cout<< " Your ans = "<<divisable(n , a, b)<<endl ;
    
    

    return 0;
}
