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
int length(Node *head){
    int count = 0;
    if(head == NULL){
        return 0;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            Node *temp = slow;
            while(temp!=fast){
                count++;
                temp = temp->next;
            }
            return count;
        }
    }
}