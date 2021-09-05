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
void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; ++i)
        {
            Node *temp = q.front();
            q.pop();
            if (reverse)
            {
                s.push(temp->key);
            }
            else
            {
                cout << temp->key << " ";
            }
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        if (reverse)
        {
            while (!s.empty())
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
    }
}