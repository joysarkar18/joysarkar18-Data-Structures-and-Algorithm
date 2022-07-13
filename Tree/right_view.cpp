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

void right_view(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {

        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            node *current = q.front();
            q.pop();
            if (i == n - 1)
            {
                cout << current->data << " ";
            }

            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
        }
    }

    return;
}

void left_view(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {

        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            node *current = q.front();
            q.pop();
            if (i == 0)
            {
                cout << current->data << " ";
            }

            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
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

    right_view(root);
    cout<<endl;
    left_view(root);

    return 0;
}