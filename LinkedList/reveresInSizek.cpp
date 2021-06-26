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
Node *reverse(Node *head, int k){
    Node *curr = head;
    bool firstloop = true;
    Node *prevFirst = NULL;
    while(curr!=NULL){
        Node *first = curr;
        Node *prev = NULL;
        int count = 0;
        while(curr!=NULL && count < k){
            Node * temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = curr->next;
        }
        if(firstloop){
            head = prev;
            firstloop = false;
        }else{
            prevFirst->next = prev;
        }
        prevFirst = prev;
    }
}