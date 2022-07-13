#include<bits/stdc++.h>
using namespace std;

void subset(int arr[] , int n ){
    for(int i=0 ; i < (1<<n)-1 ; i++){
        for( int j=0 ; j < n ;  j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" " ;
            }
        }
        
        cout<<endl;
    }
}
int main(int argc, char const *argv[])
{   int n ;
 cout<< "Enter the size of the array : " ;
 cin>>n;
 
    int arr[n];
  cout<< "Enter your array : "<<endl ;
  for(int i =0 ; i< n ; i++){
      cin>>arr[i];
  }
  
  subset(arr , n);
    
    return 0;
}
