#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node*next;
    node(){
        data = 0;
        next=NULL;

    }

    node(int value){
        data = value;
        next=NULL;

    }


};


// only applicable for 1 dig node element
int list_to_int(node*head){
    int sum= 0 ;
    while(head!=NULL){
        sum*=10;
        sum+=head->data;
        head=head->next;


    }

    return sum;
}
int main(int argc, char const *argv[])
{

    node*head = new node(4);
    head->next = new node(2);
    head->next->next = new node(7);

    node*head2 = new node(1);
    head2->next = new node(5);
    head2->next->next = new node(7);
    cout<<list_to_int(head)+list_to_int(head2)<<endl;
     
    return 0;
}