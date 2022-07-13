#include<bits/stdc++.h>
using namespace std;

 int binarySearch(int arr[] , int n , int k){
    int start , end , mid ;
    start = 0;
    end=n-1;

    while(start<end){
        mid=(start+end)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]<k){
            start=mid+1;

        }
        else {
            end=mid-1;
        }

    }

    return -1;
 }
int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    int arr[N];
    for(int i =0 ; i<N ;i++){
        cin>>arr[i];
    }

   int key;
   cin>>key;

  cout<<"position = "<< binarySearch(arr , N , key)<<endl;
   
    return 0;
}
