#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *both;
    Node(int val){
        this->data = val;
    }
};

Node *XOR(Node *a, Node *b){
    return (Node *)((uintptr_t)a^(uintptr_t)b);
}

void add(Node **head, Node **end, int value){
    Node *node = new Node(value);
    node->both = XOR(*end, NULL);
    if(*head == NULL)*head = node;
    if(*end != NULL){
        Node *te = XOR((*end)->both, NULL);
        (*end)->both = XOR((*end)->both, node);
    }
    *end = node;
}

int get(Node *head, Node *index){
    Node *prev = NULL, *next;
    while(head!=NULL){
        if(head == index)return head->data;
        next = XOR(head->both, prev);
        prev = head;
        head = next;
    }
    return -1;
}

int main(){
    Node *head = NULL, *end = NULL;
    add(&head, &end, 5);
    add(&head, &end, 4);
    add(&head, &end, 3);
    add(&head, &end, 2);
    cout<<get(head, head)<<endl;
    cout<<get(head, end);
    return 0;
}