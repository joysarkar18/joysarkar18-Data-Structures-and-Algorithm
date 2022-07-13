#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node()
    {

    }
    node(int n)
    {
        data = n;
        next = NULL;
    }
};

void insertTail(node *&head, int data)
{

    node *n = new node(data);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertAfter(node *&prev, int data)
{
    node *n = new node(data);
    n->next = prev->next;
    prev->next = n;
}

void deleteNode(node *&head, int key)
{
    node *temp = head;
    node *perv = NULL;

    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        delete temp;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            perv = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            return;
        }

        perv->next = temp->next;
        delete temp;
    }
}

void deleteAtposition(node *&head, int position)
{
    node *temp = head;
    if (position == 0)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    node *af = temp->next;
    temp->next = temp->next->next;
    delete af;
}

node *reverseNode(node *&head)
{
    node *perv = NULL;
    node *current = head;
    node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = perv;
        perv = current;
        current = next;
    }
    return perv;
}

node *reverseKNode(node *&head, int k)
{
    node *perv = NULL;
    node *current = head;
    node *next;
    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = perv;
        perv = current;
        current = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverseKNode(next, k);
    }
    return perv;
}

void makeCycle(node *&head, int position)
{
    node *temp = head;
    int count = 0;
    node *point;
    while (temp->next != NULL)
    {
        if (count == position)
        {
            point = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = point;
}

bool ditectCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            break;
        }
    }
    fast = head;
    while (1)
    {

        if (fast->next == slow->next)
        {
            slow->next = NULL;
            return;
        }
        fast = fast->next;
        slow = slow->next;
    }
}

int length(node*head){
   int count = 0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int lastNode(node*head){
   int count = 0;
    while(head->next!=NULL){
        count++;
        head=head->next;
    }
    return head->data;
}


node * apendKnodes(node*&head , int k ){

int d = 0;
node* temp = head;
int l = length(temp);
d=l-k;
while(d>1){
    temp=temp->next;
    d--;
}
node* newhead=temp->next;
node*cnt = temp->next;
temp->next=NULL;
while(cnt->next!=NULL){
    cnt=cnt->next;
}
cnt->next=head;


return newhead;

}


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


void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

    cout << endl;
}

void evenOdd(int n ){
    if(n%2==0){
        cout<<"EVEN"<<endl;

    }
    else{
        cout<<"ODD"<<endl;
    }
}

int main(int argc, char const *argv[])
{



    int t;
    cin>>t;
    for(int i = 0 ; i < t  ; i++){
        int n  , k ;
         cin>>n>>k;
        node * head = new node(1);
        for(int i=2 ; i<= n ; i++){
            insertTail(head , i);

        } 

        if(k>n||k==1){
            evenOdd(n);
        }

        else{
            while(k<=length(head)){
                deleteAtposition(head , k);
                
            }
            int last = lastNode(head);
            evenOdd(last);
        }

        display(head);
      
    }

    return 0;
}
