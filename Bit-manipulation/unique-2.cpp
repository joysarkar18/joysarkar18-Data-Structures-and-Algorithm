#include<bits/stdc++.h>
using namespace std;
bool setbitx(int n , int p){
    return ((n&(1<<p))!=0);
}

int main(int argc, char const *argv[])
{
       int n;
cout<< "Enter the size of array : " ;
cin>>n;

    int arr[n];

    cout<< "Enter your array : " <<endl;
    for( int i=0 ; i< n ; i++){
        cin>>arr[i];
    }
    
   int xorsum=0;
    for(int i = 0 ; i < n ; i++){
       xorsum = xorsum ^ arr[i];
    }
    int tempxor=xorsum;
     int setbit=0;
    int pos = 0 ;
    while(setbit!=0){
        setbit=xorsum&1;
        pos++;
        xorsum= xorsum>>1;
    }
   
   int newxor = 0;
     for( int i = 0 ; i< n ;i++){
         if(setbitx(arr[i] , (pos-1))){
           newxor = newxor^arr[i];
         }
     }


     cout<< "the first unique number = "<<newxor <<endl;

     
     

    return 0;
}
