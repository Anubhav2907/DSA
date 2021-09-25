#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
bool search(node *root, int key)
{
    if (root == NULL)
        return false;
    else if (root->data == key)
        return true;
    else if (root->data > key)
        search(root->left, key);
    else if (root->data < key)
        search(root->right, key);
}
