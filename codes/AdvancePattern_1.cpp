#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter your input";
    cin>>n;
    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n+1 - i ; j++)
        {
            cout<<j<<" " ;
        }
        cout<<endl;
    }
    return 0;
}
