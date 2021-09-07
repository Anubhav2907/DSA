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
Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->key == n1 || root->key == n2)
    {
        return root;
    }
    Node *left_lca = LCA(root->left, n1, n2);
    Node *right_lca = LCA(root->right, n1, n2);
    if (left_lca != NULL && right_lca != NULL)
    {
        return root;
    }
    if (left_lca != NULL)
    {
        return left_lca;
    }
    else
    {
        return right_lca;
    }
}