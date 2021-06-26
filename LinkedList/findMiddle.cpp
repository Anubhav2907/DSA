#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *findMiddle(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL || fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}