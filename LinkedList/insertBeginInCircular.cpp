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
Node *insertBegin(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int num = temp->data;
    head->data = temp->data;
    temp->data = num;
    return head;
}