#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int ans=0;
    int mx=-1;
    int j =0 ;
    while(j<n){
        if(arr[j]>mx && arr[j]>arr[j+1]){
            ans++;
            }
            mx= max(mx , arr[j]);
        j++;
    }
    cout<<"ans is "<<ans<<endl;
    return 0;
}
