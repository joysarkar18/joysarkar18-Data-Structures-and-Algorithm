#include<bits/stdc++.h>
using namespace std;
int getbit(int n , int p ){
    return((n&(1<<p))!=0);
}

 int setbit(int n , int p){
   int mask = 1<<p;
   return (n|mask);
}

int clearbit(int n , int p ){
    int mask = ~(1<<p);
    return (n&mask);
}

int updatebit(int n , int p ){
    cout<<"Enter the updated bit : ";
    int u ;
    cin>>u;

    if(u==1){
        return(clearbit( n , p ) & (1<<p));

    }
    else
     return(clearbit( n , p ) & (~(1<<p)));


}

int main(int argc, char const *argv[])
{
    int n , pos;
    cout<<"enter your number : ";
    cin>>n;
    cout<<"Enter your position : ";
    cin>>pos;

//    cout<<getbit(n , pos)<<endl;
   cout<<updatebit(n , pos)<<endl;
    return 0;
}
