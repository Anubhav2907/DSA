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
void PrintLeft(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; ++i)
        {
            Node *temp = q.front();
            q.pop();
            if (i == 0)
            {
                cout << temp->key << endl;
            }
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}
