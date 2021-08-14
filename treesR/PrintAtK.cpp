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
void PrintAtK(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << endl;
    else
    {
        PrintAtK(root->left, k - 1);
        PrintAtK(root->right, k - 1);
    }
}