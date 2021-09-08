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
int countNodesinCompleteBT(Node *root)
{
    int lh = 0;
    int rh = 0;
    Node *curr = root;
    while (curr)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    else
    {
        return countNodesinCompleteBT(root->left) + countNodesinCompleteBT(root->right) + 1;
    }
}