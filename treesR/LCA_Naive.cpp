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
bool findPath(Node *root, vector<Node *> &v, int n)
{
    if (root == NULL)
    {
        return false;
    }
    v.push_back(root);
    if (root->key == n)
    {
        return true;
    }
    if (findPath(root->left, v, n) || findPath(root->right, v, n))
    {
        return true;
    }
    v.pop_back();
    return false;
}
Node* lca(Node *root, int n1, int n2)
{
    vector<Node *> v1, v2;
    if (!findPath(root, v1, n1) || !findPath(root, v2, n2))
    {
        return NULL;
    }
    int i;
    for (i = 0; i < v1.size()-1 && i < v2.size()-1; i++)
    {
        if (v1[i+1] != v2[i+1])
        {
            return v1[i];
        }
    }
}