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
Node *reverse(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool is_palindrome(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *rev = reverse(slow);
    Node *curr = head;
    while(rev!=NULL){
        if(rev->data != curr->data){
            return false;
        }
        rev = rev->next;
        curr = curr->next;
    }
    return true;
}