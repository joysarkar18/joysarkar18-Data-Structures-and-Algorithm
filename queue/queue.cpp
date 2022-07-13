#include<bits/stdc++.h>
using namespace std;
void display(queue<int> a){
    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
}
int main(int argc, char const *argv[])
{
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.pop();
    display(a);



    return 0;
}