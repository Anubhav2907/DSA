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
int getInteresectionHashing(Node *head1, Node *head2){
    unordered_set<Node *> s;
    Node *curr = head1;
    while(curr!=NULL){
        s.insert(curr);
        curr = curr->next;
    }

    curr = head2;
    while(curr!=NULL){
        if(s.find(curr)!=s.end()){
            return curr->data;
        }
        curr = curr->next;
    }
    return -1;
}
int _getIntersection(int d, Node* head1, Node* head2) 
{ 
    Node* current1 = head1; 
    Node* current2 = head2; 
  
    for (int i = 0; i < d; i++) { 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
  
    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
  
        current1 = current1->next; 
        current2 = current2->next; 
    } 
  
    return -1; 
}
int getInteresectionOptimized(Node *head1, Node *head2){
    int s1 = 0;
    Node *curr = head1;
    while(curr!=NULL){
        s1++;
        curr = curr->next;
    }
    curr = head2;
    int s2 = 0;
    while(curr!=NULL){
        s2++;
        curr = curr->next;
    }
    int d;
    if(s1>s2){
        d = s1-s2;
        return _getIntersection(d, head1, head2); 
    }else{
        d = s2-s1;
        return _getIntersection(d, head2, head1);
    }
}