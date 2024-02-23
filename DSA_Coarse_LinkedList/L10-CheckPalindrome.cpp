/*

  class Solution {
private:
    Node* getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

public:
    bool isPalindrome(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Step 1: Find the middle node
        Node* middle = getMiddle(head);

        // Step 2: Reverse the second half of the list
        Node* secondHalf = reverseList(middle->next);
        middle->next = nullptr;

        // Step 3: Compare both halves
        Node* firstHalf = head;

        while (firstHalf != nullptr && secondHalf != nullptr) {
            if (firstHalf->data != secondHalf->data) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

*/