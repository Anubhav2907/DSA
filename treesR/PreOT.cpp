#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void PreOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}