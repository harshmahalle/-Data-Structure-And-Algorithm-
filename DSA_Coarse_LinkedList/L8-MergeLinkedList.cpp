#include<iostream>
using namespace std;

template <typename T>

class Node {
    public:
    T data;
    Node* next;
    
    Node(T data){
        next=NULL;
        this -> data=data
    }

    ~Node(){
        if(next != NULL)
        delete next;

    }

};

Node<int>* solve(Node<int>* first,Node<int>* second){
    //if first list only have one node,point its next to entire second list
    if(first -> next==NULL){
        first -> next=second;
        return first;
    }
    
    Node<int>* curr1=first;
    Node<int>* next1=curr1 -> next;

    Node<int>* curr2=second;
    Node<int>* next2=curr2 -> next;

    while(next1 != NULL && curr2 != NULL){
       
       if((curr2 -> data >=curr1 ->data) && (curr2 -> data <= next1 -> data)){

        //add node in between the node of first list
        curr1 -> next=curr2;
        next2=curr2 -> next;
        curr2 -> next=next1;
        //updating pointer
        curr1=curr2;
        curr2=next2;

       }
      else{
        curr1=next1;
        next1=next1 -> next;
        if(next1==NULL){
            curr1 -> next=curr2;
            return first;
        }
      }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first,Node<int>* second){

    if(first==NULL)
    return second;
    if(second==NULL)
    return first;

    if(first -> data <=second -> data){
       return solve(first,second);
    }
    else{
       return  solve(second,first);
    }
}

/*
 improvement readability easy to understand

 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // If either list is empty, return the other list
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        // Determine which list has the smaller value as the starting point
        if (list1->val <= list2->val) {
            return merge(list1, list2); // Merge list1 and list2
        } else {
            return merge(list2, list1); // Merge list2 and list1
        }
    }

    // Helper function to merge two sorted linked lists
    ListNode* merge(ListNode* first, ListNode* second) {
        ListNode* curr1 = first;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = second;
        ListNode* next2 = curr2->next;

        while (curr1 != nullptr && curr2 != nullptr) {
            if (curr2->val >= curr1->val && curr2->val <= next1->val) {
                // Insert curr2 node between curr1 and next1
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                curr1 = curr2;
                curr2 = next2;
            } else {
                // Move to the next node in list1
                curr1 = next1;
                next1 = next1->next;

                // If we reach the end of list1, append remaining list2 nodes
                if (next1 == nullptr) {
                    curr1->next = curr2;
                    return first;
                }
            }
        }

        return first;
    }
};





*/