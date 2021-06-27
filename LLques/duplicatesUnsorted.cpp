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
Node *removeDuplicates(Node *head){
    unordered_set<int> s;
    Node *tail = NULL, *top = NULL;
    tail = top = head;
    s.insert(head->data);
    head = head->next;
    while(head){
        if(s.find(head->data) == s.end()){
            tail->next = head;
            tail = head;
            s.insert(head->data);
        }
        head = head->next;
    }
    tail->next = NULL;
    return top;
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
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next->next = new Node(20);

    removeDuplicates(head);
    print(head);
}