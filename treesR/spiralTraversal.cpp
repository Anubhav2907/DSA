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
void printSpiral(Node *root)
{
    if (root == NULL)
        return;
    stack<int> s;
    queue<Node *> q;
    bool reverse = false;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
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
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
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