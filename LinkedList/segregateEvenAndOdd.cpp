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
Node *segregate_even_and_odd(Node *head){
    Node *es = NULL;
    Node *ee = NULL;
    Node *os = NULL;
    Node *oe = NULL;
    for(Node *curr = head;curr!=NULL;curr=curr->next){
        int d = curr->data;
        if(d%2==0){
            if(es==NULL){
                es = curr;
                ee = es;
            }
            else{
                ee->next = curr;
                ee = ee->next;
            }
        }
        else{
            if(os==NULL){
                os = curr;
                oe = os;
            }
            else{
                oe->next = curr;
                oe = oe->next;
            }
        }
    }
    if(os==NULL || es ==NULL){
        return head;
    }
    ee->next = os;
    oe->next = NULL;
    return es;
}