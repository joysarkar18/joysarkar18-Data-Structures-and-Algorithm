#include<bits/stdc++.h>
using namespace std;
bool check(int arr[] , int n){ 
    if(n==1){
        return 1;
    } 
    bool restArray = check(arr+1 , n-1);
    return ((arr[0]<arr[1])&restArray);
}

int main(int argc, char const *argv[])
{   int n;
   cout<<"Enter your size of array : ";
   cin>>n;
    int arr[n];
    cout<< "Enter your array : "<<endl ;
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    
    if(check(arr , n)){
        cout<<"Array is sorted "<<endl;
    }
   else{
       cout<<"array is not sorted"<<endl;
   }
    return 0;
}
