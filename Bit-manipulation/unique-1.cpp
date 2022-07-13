#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{    int n;
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

    cout <<"The unique number = "<<xorsum<<endl;
    return 0;
}
