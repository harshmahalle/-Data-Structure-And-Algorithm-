#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data=data;
            this->next=NULL;
        }

};

void insertAtHead(Node* &head ,int data){//
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}

void print(Node* head) {
    if (head==NULL) {
        cout<< "List is empty" <<endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail,int data) {
    Node* newNode = new Node(data);
    if(tail==NULL) {
        tail = newNode;
        return; //avoid executing the remaining code as list is empty
    }
    tail->next=newNode;
    tail=newNode;
}

void insertAtPosition(Node* &tail,Node* &head ,int position,int data){
    if (position <= 1) {
        insertAtHead(head, data);
        return;
    }

    Node* newNode = new Node(data);
    Node* current = head;
    int count = 1;

    while (current != nullptr && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        insertAtTail(tail, data);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

int main() {
    // Create a new node
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // Head points to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 13);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    return 0;
}