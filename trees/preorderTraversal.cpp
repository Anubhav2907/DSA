#include <bits/stdc++.h>
using namespace std;
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
void preorderTraversal(Node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}