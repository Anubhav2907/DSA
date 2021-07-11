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
int NodesInPerfectBt(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = 0, rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        curr = curr->left;
        lh++;
    }
    curr = root;
    while (curr != NULL)
    {
        curr = curr->right;
        rh++;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    return 1 + NodesInPerfectBt(root->left) + NodesInPerfectBt(root->right);
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout << NodesInPerfectBt(root);
}