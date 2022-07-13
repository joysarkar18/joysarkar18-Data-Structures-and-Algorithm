#include <iostream>  
#include<list>  
using namespace std;  
int main()  
{  
     
    std::list<char> li={'+','-','*','@'};  
    list<char> li1={'j','a','v','a'};  
    std::cout << "Initially,content of list li is :";  
    for(list<char> :: iterator itr=li.begin();itr!=li.end();++itr)  
    cout<<*itr;  
    std::cout << '\n'<<"Initially,content of list li1 is :";  
    for(list<char> :: iterator itr=li1.begin();itr!=li1.end();++itr)  
    cout<<*itr;  
    li.swap(li1);  
    cout<<'\n';  
    cout<<"After swapping, content of list li is :";  
    for(list<char> :: iterator itr=li.begin();itr!=li.end();++itr)  
    cout<<*itr;  
    cout<<'\n';  
    cout<<"After swapping, content of list li1 is :";  
    for(list<char> :: iterator itr=li1.begin();itr!=li1.end();++itr)  
    cout<<*itr;  
    return 0;  
}  