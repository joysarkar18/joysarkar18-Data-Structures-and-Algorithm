#include<bits/stdc++.h>
using namespace std;

class node
{

public:

int data;
node*next;

node(){

}

node(int n){
    data=n;
    next=NULL;
    
}

};

node*merg(node*&head1 , node*&head2){
    
    node*temp1 = head1;
    node*temp2= head2;

    node*ptr=new node(-1);
    node*newhead = ptr;
    while (temp1!=NULL && temp2!=NULL){

        if(temp1->data<=temp2->data){
           ptr->next=temp1;
           temp1=temp1->next;
        }

        else if(temp1->data>temp2->data){
            ptr->next=temp2;
            temp2=temp2->next;

        }
        ptr=ptr->next;

    }

    while(temp1!=NULL){
        ptr->next=temp1;
        temp1=temp1->next;
        ptr=ptr->next;
    }
    while(temp2!=NULL){
        ptr->next=temp2;
        temp2=temp2->next;
        ptr=ptr->next;
    }

    return newhead->next;
   
    

}

int main(int argc, char const *argv[])
{
     
    return 0;
}