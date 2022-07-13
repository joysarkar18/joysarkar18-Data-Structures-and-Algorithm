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
    static int idx = 0;
    int current = p[idx];
    idx++;
    int pos = search(in , start , end , current);
    node* root = new node(current);
    if(start==end){
        return root;
    }

    root->left = bulid_Tree(p , in , start , pos-1);
    root->right = bulid_Tree(p , in , pos+1 , end);
    return root;

}



void postorder(node*root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";


    }

int main(int argc, char const *argv[])
{
    int preorder[] = {1,2,4,5,3,6,7};
    int inorder[] = {4,2,5,1,6,3,7};

    node* root = bulid_Tree(preorder , inorder , 0 , 6 );
    postorder(root);
     
    return 0;
}