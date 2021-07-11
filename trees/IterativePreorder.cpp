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
void IterativePreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        cout << temp->key << endl;
        if (temp->right != NULL)
        {
            s.push(temp->right);
        }
        if (temp->left != NULL)
        {
            s.push(temp->left);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(60);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    IterativePreorder(root);
}