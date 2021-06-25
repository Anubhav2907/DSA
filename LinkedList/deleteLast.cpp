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
Node *deleteLast(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}