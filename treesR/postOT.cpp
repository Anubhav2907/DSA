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
void postorder_traversal(Node *root)
{
    if (root == NULL)
        return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->key << " ";
}