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
void levelOrder(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *node = q.front();
        q.pop();
        if(node == NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }
        if(node->left != NULL){
            q.push(node->left);
        }
        if(node->right != NULL){
            q.push(node->right);
        }
        cout << node->key << " ";
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	levelOrder(root);
}