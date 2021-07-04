#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
struct MyQueue{
    Node *front, *rear;
    int size;
    MyQueue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enque(int x){
        Node *temp = new Node(x);
        size++;
        if(front == NULL){
            front = temp;
            rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deque(){
        if(front == NULL){
            return;
        }
        size--;
        Node *temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
    }
};