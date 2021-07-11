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
Node *lca(Node *root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->key == n1 || root->key == n2){9'
    
        return root;
    }
    Node *lca1 = lca(root->left, n1, n2);
    Node *lca2 = lca(root->right, n1, n2);
    if(lca1 != NULL && lca2 != NULL){
        return root;
    }
    if(lca1 != NULL){   
        return lca1;
    }
    else{
        return lca2;
    }
}