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
void isLoop(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
       return; 
    }
    slow = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}