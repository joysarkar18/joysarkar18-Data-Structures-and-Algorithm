#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;
    node(int value){
        data=value;
        left=NULL;
        right = NULL;
    }

   
};

int search(int in[], int start , int end , int current){
    for(int i = start ; i<=end ; i++){
        if(current==in[i]){
            return i;
        }
    }
}


node* bulid_Tree( int p[] , int in[] , int start , int end ){
    static int idx = end;
    int current = p[idx];
    idx--;
    node* root = new node(current);
    if(start==end){
        return root;
    }

    int pos = search(in , start , end , current);
    root->right = bulid_Tree(p , in , pos+1 , end);
    root->left = bulid_Tree(p , in , start , pos-1);
    return root;

}

void preorder(node*root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }



int main(int argc, char const *argv[])
{
    int postorder[] = {4,5,2,6,7,3,1};
    int inorder[] = {4,2,5,1,6,3,7};

    node* root = bulid_Tree(postorder , inorder , 0 , 6 );
    preorder(root);
     
    return 0;
}