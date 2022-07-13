#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string str = "the room is ful";
    transform(str.begin() , str.end() , str.begin() , ::toupper);
    cout<<str;
    return 0;
}
