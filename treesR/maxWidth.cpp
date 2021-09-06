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
int maxWidth(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int max_width = 0;
    while (!q.empty())
    {
        int size = q.size();
        max_width = max(max_width, size);
        while (size--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return max_width;
}