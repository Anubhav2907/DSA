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
Node *swapK(Node *head,int n, int k){
    if(n<k){
        return head;
    }
    if(k == n-k+1){
        return head;
    }
    Node *temp1 = head, *temp2 = head;
    Node *prev1 = NULL, *prev2 = NULL;
    for (int i = 1; i<n-k+1; ++i) {
        prev1 = temp1;
        temp1 = temp1->next;
    }
    for (int i = 1; i<k ; ++i) {
        prev2 = temp2;
        temp2 = temp2->next;
    }
    if(prev1){
        prev1->next = temp2;
    }
    if(prev2){
        prev2->next = temp1;
    }
    Node *temp = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp;
    if(k==1){
        head = temp1;
    }
    if(k==n){
        head = temp2;
    }
    return head;
}
void print(Node *head){
    if(head==NULL){
        return;
    }
    cout << head->data << endl;
    print(head->next);
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
    head2->next->next->next->next = new Node(45);
    head2->next->next->next->next->next = new Node(55);
    head2->next->next->next->next->next->next = new Node(65);
    Node *temp = swapK(head2,7, 2);
    print(temp);
}