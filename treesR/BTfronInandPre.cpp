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
int preIndex = 0;
Node *binaryTree(int in[], int pre[], int st, int end)
{
    if (st > end)
        return NULL;
    Node *root = new Node(pre[preIndex++]);
    int index = 0;
    for (int i = st; i <= end; i++)
    {
        if (in[i] == root->key)
        {
            index = i;
            break;
        }
    }
    root->left = binaryTree(in, pre, st, index - 1);
    root->right = binaryTree(in, pre, index + 1, end);
    return root;
}