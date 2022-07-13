#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i= 0 ; i< t ; i++){
        int n , x , y;
        cin>>n>>x>>y;
        int arr[n];
        int withOutDis=0;
        int withdis=0;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            withOutDis+=arr[i];
            if(arr[i]>y){
                withdis+=(arr[i]-y);
            }
        }
   
      if((withdis+x)<withOutDis){
          cout<<"COUPON"<<endl;

      }
      else{
          cout<<"NO COUPON"<<endl;
      }
   
    }


    
    return 0;
}