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
const int Empty = -1;
int index = 0;
void serialize(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(Empty);
    }
    v.push_back(root->key)
        serialize(root->left, v);
    serialize(root->right, v);
}
Node *deserialize(vector<int> &v)
{
    if (index == v.size())
    {
        return;
    }
    int val = v[index];
    index++;
    if (val == Empty)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = deserialize(v);
    root->right = deserialize(v);
    return root;
}