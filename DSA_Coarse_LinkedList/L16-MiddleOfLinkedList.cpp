/*
approach1:

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * prev=NULL;
        ListNode * slow = head;
        ListNode * fast = head;
        if(head==NULL || head->next==NULL)   
         return NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
     prev->next = slow->next;
     delete slow;
  
        return head;
        
    }
};

approach2:

ListNode* deleteMiddle(ListNode* head) {
    int countNodes = 0;
    ListNode* curr = head;

    // Step 1: Count the number of nodes
    while (curr) {
        countNodes++;
        curr = curr->next;
    }

    // Step 2: Find the middle node
    int mid = countNodes / 2;
    ListNode* dummyNode = new ListNode(0);
    dummyNode->next = head;
    ListNode* prev = dummyNode;
    curr = head;

    while (mid > 0) {
        curr = curr->next;
        prev = prev->next;
        mid--;
    }

    // Step 3: Delete the middle node
    prev->next = curr->next;
    delete curr;

    // Step 4: Clean up and return the modified list
    ListNode* newHead = dummyNode->next;
    delete dummyNode;
    return newHead;
}

approach3:

ListNode* findMiddleNode(ListNode* head) {
    int countNodes = 0;
    ListNode* current = head; 

    while (current) {
        countNodes++;
        current = current->next;
    }

    current = head;
    int mid = countNodes / 2;

    while (mid > 0) {
        current = current->next;
        mid--;
    }

    return current;
}

approach4:

ListNode* deleteMiddle(ListNode* head) {
    int countNodes = 0;
    ListNode* curr = head;

    // Step 1: Count the number of nodes
    while (curr) {
        countNodes++;
        curr = curr->next;
    }

    // Step 2: Find the middle node
    int mid = countNodes / 2;
    ListNode* dummyNode = new ListNode(0);
    dummyNode->next = head;
    ListNode* prev = dummyNode;
    curr = head;

    while (mid > 0) {
        curr = curr->next;
        prev = prev->next;
        mid--;
    }

    // Step 3: Delete the middle node
    prev->next = curr->next;
    delete curr;

    // Step 4: Clean up and return the modified list
    ListNode* newHead = dummyNode->next;
    delete dummyNode;
    return newHead;
}

approach5;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }
};

*/