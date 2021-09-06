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
Node *prev = NULL;
Node *btToDll(Node *root)
{
    if (root == NULL)
        return root;
    Node *head = btToDll(root->left);
    if (prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    btToDll(root->right);
    return head;
}