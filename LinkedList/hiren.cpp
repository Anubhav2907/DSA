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
Node *isLoop(Node *head){
    Node *temp = new Node(0);
    Node *curr = head;
    Node *start = head;
    Node *next = head;
    while(curr!=NULL){
        if(curr->next==temp){
            while(start != curr)
            {
                next = start;
                start = start->next;
                delete next;
            }
            break;
        }
        Node *curr_next = curr->next;
        curr->next=temp;
        curr = curr_next;
    }
    
    return curr;
}