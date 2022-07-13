#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row , col ;
    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the column : ";
    cin>>col;

    int arr[row][col];

    for(int i =0 ; i < row ; i++){
        for(int j =0 ; j<col ; j++){
                cin>>arr[i][j];
        }
    }

    cout<<"Your 2D array : \n";
    for(int i =0 ; i < row ; i++){
        for(int j =0 ; j<col ; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
