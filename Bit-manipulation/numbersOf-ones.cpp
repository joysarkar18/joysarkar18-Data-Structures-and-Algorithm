#include<bits/stdc++.h>
using namespace std;

int noones(int n){
    int count = 0;
    while(n){
      n=n&(n-1);
      count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;

    cout<< "No of ones in the number is =  "<< noones(n)<<endl ;
    

    return 0;
}
