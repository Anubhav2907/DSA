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
int sizeOfBt(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + sizeOfBt(root->left) + sizeOfBt(root->right);
}