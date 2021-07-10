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
int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (1 + max(height(root->left), height(root->right)));
}
int diameter(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1, max(d2 + d3));
}
