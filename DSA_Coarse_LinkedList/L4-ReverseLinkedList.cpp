#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

Node* reverseLinkedList(Node *head){

if(head == NULL || head -> next == NULL){
    return head;
}

Node* prev=NULL;
Node* curr=head;
Node* forward=NULL;

while(curr != NULL){
    forward = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;
}

return prev;

}

/* void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void push(int data){
    Node* head = node1;
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    push(20);
    push(30);
    push(40);
    push(50);

    print(head);

//middle of linked list refer net

}*/