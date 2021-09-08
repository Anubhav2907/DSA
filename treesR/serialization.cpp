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
void serialize(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(-1);
        return;
    }
    v.push_back(root->key);
    serialize(root->left, v);
    serialize(root->right, v);
}
int index = 0;
Node *deserialize(vector<int> &v)
{
    if (index == v.size())
    {
        return NULL;
    }
    int val = v[index];
    index++;
    if (v == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = deserialize(v);
    root->right = deserialize(v);
    return root;
}