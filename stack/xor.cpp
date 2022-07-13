#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i< t ; i++){
      int n;
      cin>>n;
      int arr1[n] , arr2[n];
      for(int i = 0 ; i< n ; i++){
          cin>>arr1[i];
      }
      for(int i = 0 ; i< n ; i++){
          cin>>arr2[i];
      }
      int count=0;
      int j=n-1;

    for(int i = 0 ; i< n-1 ;i++){
     while(j>i){
          if((arr1[i]^arr1[j])==(arr2[i]^arr2[j])){
                count++;
            }
            j--;
     }
    }

    cout<<count<<endl;

    } 
    return 0;
}