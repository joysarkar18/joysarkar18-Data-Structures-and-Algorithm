#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ; 
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
      int mx=-99999999;
    for(int i=0 ; i<n ;i++){
      mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}
