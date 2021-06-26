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
bool isLoop(Node *head){
    Node *temp = new Node(0);
    Node *curr = head;
    while(curr!=NULL){
        if(curr->next==NULL){
            return false;
        }
        if(curr->next==temp){
            return true;
        }
        Node *curr_next = curr->next;
        curr->next=temp;
        curr = curr_next;
    }
}
bool isLoophash(Node *head){
    unordered_set<Node *> s;
    for(Node *curr = head;curr!=NULL;curr=curr->next){
        if(s.find(curr)!=s.end()){
            return true;
        }
        s.insert(curr);
    }
    return false;
}