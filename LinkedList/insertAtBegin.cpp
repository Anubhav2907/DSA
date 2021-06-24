#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *insertBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
void print(Node *head){
    if(head==NULL){
        return;
    }
    cout << head->data << endl;
    print(head->next);
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node *temp = insertBegin(head, 5);
    print(temp);
}