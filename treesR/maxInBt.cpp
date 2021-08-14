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
int maxInBt(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->key, max(maxInBt(root->left), maxInBt(root->right)));
}
