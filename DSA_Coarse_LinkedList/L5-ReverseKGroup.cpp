#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

Node* kReverse(Node* &head,int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    //step1:reverse first k nodes
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr != NULL && count < k){
        next=curr -> next;
        curr -> next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //step2:recursion dekhlega age ka
    if(next != NULL){
        head -> next=kReverse(next,k);
    }

    //step3:return head of reversed list
    return prev;
}

int main(){
    Node* node1=new Node(10);
    

    Node* head=node1;

    kReverse(head,2);

}

/*

    class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Check if there are at least k nodes remaining
        int count = 0;
        ListNode* curr = head;
        while (curr && count < k) {
            curr = curr->next;
            count++;
        }
        if (count < k)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupTail = dummy;

        while (head) {
            ListNode* groupHead = head;
            ListNode* groupTail = nullptr;

            // Check if there are at least k nodes remaining
            count = 0;
            curr = head;
            while (curr && count < k) {
                curr = curr->next;
                count++;
            }
            if (count < k)
                break;

            // Reverse the group of k nodes
            for (int i = 0; i < k; i++) {
                ListNode* nextNode = head->next;
                head->next = groupTail;
                groupTail = head;
                head = nextNode;
            }

            // Connect the reversed group to the previous group
            prevGroupTail->next = groupTail;
            prevGroupTail = groupHead;
        }

        prevGroupTail->next = head;
        return dummy->next;
    }
};

*/