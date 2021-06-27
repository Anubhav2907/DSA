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
Node *rotate(Node *head, int k){
    Node *curr = head;
    Node *end = head;
    for (int i = 0; i<k-1; ++i) {
        curr = curr->next;
    }
    while(end->next != NULL){
        end = end->next;
    }
    Node *temp = curr->next;
    end->next = head;
    curr->next = NULL;
    return temp;
}
void print(Node *head){
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(7);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(9);
    // head->next->next->next->next->next = new Node(60);
    // head->next->next->next->next->next->next = new Node(70);
    // head->next->next->next->next->next->next->next = new Node(80);

    Node *temp = rotate(head, 3);
    print(temp);
}