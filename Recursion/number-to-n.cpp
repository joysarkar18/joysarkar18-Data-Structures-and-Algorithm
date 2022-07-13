#include<bits/stdc++.h>
using namespace std;
void increase(int n){
   if(n==0){
       return;
   }
    increase(n-1);
    cout<<n<<endl;

}
void decrease(int n){
   if(n==0){
       return;
   }
    cout<<n<<endl;
    decrease(n-1);

}



int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    // increase(n);
    decrease(n);
    return 0;
}
