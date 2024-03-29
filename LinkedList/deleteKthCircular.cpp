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
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}
Node *deleteK(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return deleteHead(head);
    }
    Node *curr = head;
    for (int i = 0; i<k-2; ++i) {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}