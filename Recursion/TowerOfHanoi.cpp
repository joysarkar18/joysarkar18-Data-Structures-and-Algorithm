#include<bits/stdc++.h>
using namespace std;
void tower(int n , char a , char b , char c){
    if(n==1){
        cout<<"move "<<a<<" to "<<c<<endl;
        return;
    }

    // move n-1 a to b
    tower(n-1 , a,c,b);
    cout<<"move "<<a<<" to "<<c<<endl;
    // move n-1 b to c
     tower(n-1 , b,a,c);

}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n; 
    tower(n,'A','B','C');
    return 0;
}