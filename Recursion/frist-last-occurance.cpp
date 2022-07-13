#include <bits/stdc++.h>
using namespace std;
int first(int arr[] , int n , int i , int key){
    if(arr[i]==key){
        return i;
    }
    if(i==n){
        return-1;
    }
    return (first(arr, n, i+1 , key));
}

int last(int arr[] , int n , int i , int key){

    if(i==n){
        return -1;
    }
   int lastoccr = last(arr,n,i+1,key);
   if(lastoccr!=-1){
       return lastoccr;

   }

   if(arr[i]==key){
       return i;
   }
   else return -1;
}



int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter your size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter your element of the array : ";
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    int key;
        cout << "Enter your key : ";
        cin >> key;


        cout<<"first occurance = "<<first(arr , n , 0 , key)<<endl;
        cout<<"last occurance = "<<last(arr , n , 0 , key)<<endl;
    return 0;
}
