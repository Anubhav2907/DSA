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
Node *merge(Node *head1, Node *head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *head = NULL, *tail = NULL;
    if(head1->data <= head2->data){
        head = tail = head1;
        head1 = head1->next;
    }
    else{
        head = tail = head2;
        head2 = head2->next;
    }
    while(head1!= NULL && head2!=NULL){
        if(head1->data < head2->data){
            tail->next =head1;
            tail = head1;
            head1 = head1->next;
        }
        else{
            tail->next =head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    if(head1==NULL){
        tail->next =head2;
    }
    else{
        tail->next =head1;
    }
    return head;
}
void print(Node *head){
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){
    Node *head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);
    head1->next->next->next = new Node(40);
    head1->next->next->next->next = new Node(50);
    Node *head2 = new Node(5);
    head2->next = new Node(15);
    head2->next->next = new Node(25);
    head2->next->next->next = new Node(35);
    head2->next->next->next = new Node(45);
    head2->next->next->next->next = new Node(55);
    head2->next->next->next->next->next = new Node(65);
    Node *temp = merge(head1, head2);
    print(temp);
}