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
void printNFromEnd(Node *head, int n){
    if(head==NULL){
        return;
    }
    Node *fast = head;
    for (int i = 0; i<n ; ++i) {
        if(fast == NULL){
            return;
        }
        fast = fast->next;
    }
    Node *second = head;
    while(fast != NULL){
        fast = fast->next;
        second = second->next;
    }
    cout << second->data << endl;
}