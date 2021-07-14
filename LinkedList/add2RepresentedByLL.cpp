#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *add2RepresentedByLL(Node *head1, Node *head2)
{
    Node *curr1 = reverse(head1);
    Node *curr2 = reverse(head2);
    int c = 0;
    int s = 0;
    Node *temp;
    Node *res = NULL;
    NOde *curr = NULL;
    while (curr1 != NULL || curr2 != NULL)
    {
        s = (curr1 ? curr1->data : 0) + (curr2 ? curr2->data : 0) + c;
        c = (s > 10) ? 1 : 0;
        temp = new Node(s % 10);
        if (res == NULL)
        {
            res = temp;
        }
        else
        {
            curr->next = temp;
        }
        curr = temp;
        if (curr1)
        {
            curr1 = curr1->next;
        }
        if (curr2)
        {
            curr2 = curr2->next;
        }
    }
    if (c == 1)
    {
        temp = new Node(1);
        curr->next = temp;
        curr = temp;
    }
    res = reverse(res);
    return res;
}