#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, col;
    cout << "Enter the row : ";
    cin >> row;
    cout << "Enter the column : ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int num;
    cout << "ENter the number you wanna find : ";
    cin >> num;
    int i = 0;
    int j = col-1;
    bool test = false;
    while ( i < row && j >=0)
    {   
        if(arr[i][j]==num){
            test=true;
            break;
        }
      else  if(arr[i][j]<num){
           i++;
       }

       else if ( arr[i][j]>num){
           j--;
       }


    }

    if (test == true)
    {
        cout<< "The Number is present and the index : "<< i <<" , "<<j<<endl ;
        
    }
    else{
        cout<<"the Number is not present "<<endl;
    }
    
    

    return 0;
}