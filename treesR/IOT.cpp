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
void Inorder(Node *root){
    if(root==NULL)
        return;
    Inorder(root->left);
    cout<<root->key<<" ";
    Inorder(root->right);
}