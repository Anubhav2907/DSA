#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void insert(Node *head, int p, int x){    
    Node *temp = new Node(x);
    if(head==NULL){
        head = temp;
        return;
    }
    Node *curr = head;
    for (int i = 0; i<p; ++i) {
        curr = curr->next;
    }
    if(curr->next==NULL){
        curr->next=temp;
        temp->prev=curr;
    }
    curr->next->prev=temp;
    temp->next=curr->next;
    temp->prev=curr;
    curr->next = temp;
}