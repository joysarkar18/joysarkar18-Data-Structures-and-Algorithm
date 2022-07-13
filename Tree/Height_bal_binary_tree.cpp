#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;
    tree(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int height(tree*root){
    if(root==NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

bool height_balance(tree*root , int * height){
    if(root==NULL){
        *height =0;
        return true;
    }

    int lh = 0 , rh = 0 ;
   if( height_balance(root->left , &lh)==false){
    return false;
   }

   if(height_balance(root->right , &rh)==false){
    return false;
   }
   *height= max(lh , rh )+1 ;
    if(abs(lh-rh)>1){
        return false;
    }

    else
    return true;
}



int main(int argc, char const *argv[])
{
     
 tree*root= new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);
    root->right->right->right = new tree(8);
    root->right->right->right->left = new tree(8);
    root->right->right->right->right = new tree(9 );
     root->left->left->left = new tree(10);
     root->left->left->left->right = new tree(10);
     root->left->left->left->left = new tree(11);
  int height = 0 ;
    cout<<height_balance(root , & height);

    return 0;
}