#include<bits/stdc++.h>
using namespace std;
bool checkpower(int n){
    return (!(n&(n-1)));
}
int main(int argc, char const *argv[])
{    
    int n;
    cout<< "Enter the number : " ;
    cin>>n;
    
    if(checkpower(n)==true){
       cout<< "Its power of two " <<endl;
       
    }

    else{
        cout<< "Its not power of two "<<endl ;
        
    }
    return 0;
}
