#include<bits/stdc++.h>
using namespace std;
void display(deque<int> d){
    while(!d.empty()){
        cout<<d.front()<<"  ";
        d.pop_front();
    }
}
int main(int argc, char const *argv[])
{
    deque<int> d;
    d.push_back(1); 
    d.push_back(2); 
    d.push_back(3); 
    d.push_back(4); 
    d.push_back(5); 
    d.push_back(6); 
    d.push_back(7); 
    display(d);
    return 0;
}