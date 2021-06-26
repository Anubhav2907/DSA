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
void print(Node *head){
    if(head==NULL){
        return;
    }
    Node *p = head;
    do{
        cout << p->data << endl;
        p = p->next;
    }while(p!=head);
}
