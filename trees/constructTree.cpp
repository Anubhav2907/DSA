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
Node *constructTree(int in[], int pr[], int is, int ie)
{
    if (is > ie)
        return NULL;
    Node *root = new Node(pr[preIndex++]);
    int index;
    for (int i = is; i <= ie; ++i)
    {
        if (in[i] == root->key)
        {
            index = i;
            break;
        }
    }
    root->left = constructTree(in, pr, is, index - 1);
    root->right = constructTree(in, pr, index + 1, ie);
    return root;
}