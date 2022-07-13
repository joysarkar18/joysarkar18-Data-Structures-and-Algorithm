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

int count_node(node*root){
    if(root==NULL){
        return 0;
    }
    return count_node(root->left)+count_node(root->right)+1;
}

int sum_node(node*root){
    if(root==NULL){
        return 0;
    }
    return sum_node(root->left)+sum_node(root->right)+root->data;
}

int calculate_height(node*root){
    if(root==NULL){
        return 0;
    }
    int left_height = calculate_height(root->left);
    int right_height = calculate_height(root->right);
    return max(left_height,right_height)+1;
}

int calculate_diameter(node*root){
    if(root==NULL){
        return 0;
    }
    int leftHeight = calculate_height(root->left);
    int rightHeight = calculate_height(root->right);
    int current = leftHeight+rightHeight+1;

    int leftd = calculate_diameter(root->left);
    int rightd = calculate_diameter(root->right);
    return max(current , max(leftd,rightd));
}

void sum_Replacement(node*root){
    if(root==NULL){
        return;
    }
    sum_Replacement(root->left);
    sum_Replacement(root->right);
    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }

}

int calculate_diameter_optimized(node*root , int*height) {
if(root == NULL){
   *height = 0 ;
   return 0;
}

    int lh= 0 , rh = 0;
    int ldia = calculate_diameter_optimized(root->left , &lh);
    int rdia = calculate_diameter_optimized(root->right , &rh);
    int current = lh+rh+1;
    *height = max(lh,rh)+1;
    return max(current , max(lh , rh ));
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
    node*root= new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // root->left->left->left = new node(8);
    cout<<count_node(root)<<endl;
    cout<<sum_node(root)<<endl;
    cout<<calculate_height(root)<<endl;
    cout<<calculate_diameter(root)<<endl;
    int height = 0 ;

    cout<<calculate_diameter_optimized(root ,&height )<<endl;
    // preorder(root);
    // cout<<endl;
    // sum_Replacement(root);
    
    // preorder(root);

   
     
    return 0;
}