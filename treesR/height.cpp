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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + (max(height(root->left), height(root->right)));
}