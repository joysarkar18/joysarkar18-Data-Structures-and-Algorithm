#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string str = "9234478249575698754574578357835876427";
    sort(str.begin() , str.end() , greater<int>());
    cout<<str;
    return 0;
}
