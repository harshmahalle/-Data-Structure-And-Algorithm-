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

Node* uniqueSortedList(Node *head){
    //empty list
    if(head==NULL)
    return NULL;

    //non-empty list
    Node* curr=head;
    while(curr != NULL){
        if((curr -> next != NULL)&& curr -> data==curr -> next->data){
            Node* next_next = curr -> next -> next;
            Node* nodeTodelete=curr -> next;
            delete(nodeTodelete);
            curr -> next=next_next;
        }
        else{
            //not equal
            curr=curr -> next;
        }
    }

    return head;
}

/*
//sorted list
     class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                ListNode* duplicate = current->next;
                current->next = duplicate->next;
                delete duplicate; // Free memory occupied by the duplicate node
            } else {
                current = current->next; // Move to the next distinct node
            }
        }
        
        return head;
    }
};

//unsorted list
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        unordered_set<int> seen_values;
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current != nullptr) {
            if (seen_values.count(current->val) > 0) {
                // Duplicate node found, remove it
                prev->next = current->next;
                delete current; // Free memory occupied by the duplicate node
                current = prev->next;
            } else {
                seen_values.insert(current->val);
                prev = current;
                current = current->next;
            }
        }
        
        return head;
    }
};

//remove all duplicates
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        unordered_map<int, int> frequency_map;
        
        // Traverse the linked list and count the frequency of each element
        ListNode* current = head;
        while (current != nullptr) {
            frequency_map[current->val]++;
            current = current->next;
        }
        
        // Create a new list with unique elements
        ListNode* dummy = new ListNode(0);
        ListNode* new_head = dummy;
        
        current = head;
        while (current != nullptr) {
            if (frequency_map[current->val] == 1) {
                new_head->next = new ListNode(current->val);
                new_head = new_head->next;
            }
            current = current->next;
        }
        
        new_head->next = nullptr;
        ListNode* result = dummy->next;
        delete dummy;
        
        return result;
    }
};






*/