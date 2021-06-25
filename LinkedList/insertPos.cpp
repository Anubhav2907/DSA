#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data= x;
        next = NULL;
    }
};
Node *insertPos(Node *head,int x, int n){
    int k = 0;
    Node *curr= head;
    Node *temp = new Node(x);
    while(k!=n-1){
        if(curr->next==NULL){
            return head;
        }
        curr= curr->next;
        k++;
    }
    temp->next=curr->next;
    curr->next=temp;
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node *temp = insertPos(head, 25,8);
    print(temp);
}