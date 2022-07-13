#include<bits/stdc++.h>
using namespace std;
int path(int start , int n){
    if(start==n){
        return 1;
    }
    int count=0;
    for(int i=start ; i<=n ;i++ ){
        count+=path(i+1,n);
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int start;
    cout<<"Enter your starting position : ";
    cin>>start;

    cout<<"your path = "<<path(start, n)<<endl;
    return 0;
}
