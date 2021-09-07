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
int res = 0;
int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = diameter(root->left);
    int rh = diameter(root->right);
    res = max(res, lh + rh + 1);
    return max(lh, rh) + 1;
}