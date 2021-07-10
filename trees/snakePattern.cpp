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
void snakePattern(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; ++i)
        {
            Node *temp = q.front();
            q.pop();
            if (reverse)
            {
                s.push(temp->key);
            }
            else
            {
                cout << temp->key << endl;
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        if (reverse)
        {
            while (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        reverse = !reverse;
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    snakePattern(root);
}