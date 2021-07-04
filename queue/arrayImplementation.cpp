#include <bits/stdc++.h>
using namespace std;
struct MyQueue {
    int size;
    int cap;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull(){
        return size == cap;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enque(int x){
        if(isFull()){
            return;
        }
        arr[size] = x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        for (int i = 1;i<size ; ++i) {
            arr[i-1] = arr[i];
        }
        size--;
    }
    int getFront(){ 
        if(isEmpty()){
            return -1;
        }
        return arr[0];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[size-1];
    }
}
struct MyQueue2 {
    int size;
    int cap;
    int front;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        front = 0; 
        arr = new int[c];
    }
    bool isFull(){
        return size == cap;
    }
    bool isEmpty(){
        return size == 0;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return (front+size-1)%cap;
    }
    void enque(int x){
        if(isFull()){
            return;
        }
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        int front = getFront();
        front = (front+1)%cap;
        size--;
    }
};