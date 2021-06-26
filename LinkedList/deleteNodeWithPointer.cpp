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
void deleteNode(Node *ptr){
    if(ptr->next ==NULL){
        delete ptr;
        return;
    }
    ptr->data = ptr->next->data;
    Node *temp = ptr->next;
    ptr->next = ptr->next->next;
    delete temp;
}