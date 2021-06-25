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
Node *reverse(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *temp = NULL;
    Node *curr = head;
    while(curr!=NULL){
        temp = curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr = curr->prev;
    }
    return temp->prev;
}
void print(Node *head){
    if(head==NULL){
        return;
    }
    cout << head->data << endl;
    print(head->prev);
}
int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp1->prev = head;
    Node *res = reverse(head);
    print(head);
}