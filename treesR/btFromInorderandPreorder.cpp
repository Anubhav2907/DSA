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
Node *buildTree(int inorder[], int preorder[], int inStrt, int inEnd)
{
    if (inStrt > inEnd)
    {
        return NULL;
    }
    Node *root = new Node(preorder[preIndex]);
    preIndex++;
    int index;
    for (int i = inStrt; i <= inEnd; i++)
    {
        if (root->key == inorder[i])
        {
            index = i;
            break;
        }
    }
    root->left = buildTree(inorder, preorder, inStrt, index - 1);
    root->right = buildTree(inorder, preorder, index + 1, inEnd);
    return root;
}