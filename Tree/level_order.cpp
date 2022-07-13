#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void level_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> d;
    d.push(root);
    d.push(NULL);
    while (!d.empty())
    {
        node *temp = d.front();
        d.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                d.push(temp->left);
            }

            if (temp->right != NULL)
            {
                d.push(temp->right);
            }
        }

        else if (!d.empty())
        {
            d.push(NULL);
        }
    }
    return;
}

int main(int argc, char const *argv[])
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    level_traversal(root);
    return 0;
}