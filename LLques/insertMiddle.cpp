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
Node *insert(Node *head, int x){
    Node *slow = head;
    Node *fast = head->next;
    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *temp = new Node(x);
    temp->next = slow->next;
    slow->next = temp;
}
void print(Node *head){
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    insert(head, 35);
    print(head);
}