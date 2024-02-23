//different approaches
/*
   
   // two pointer/fast and slow / floy warshall detection method
   class Solution {
    public:
    bool hasCycle(ListNode *head) {

      if (head == nullptr || head->next == nullptr) {
        return false;
      }

      ListNode* slow = head;
      ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
     }

     return false;
    }
};

*/


/*
    //using map

     class Solution {
    public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)
        return nullptr;

    unordered_map<ListNode*,int> map;
    
    while(head != NULL){
        if(map.count(head)>0)
            return head;
        else
            map[head]=1;
            head=head->next;
    }
    return nullptr;
    }
};

*/



/*
  //detect loop by floyd cycle detection method
  ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* meetingPoint = nullptr;

    // Step 1: Detect the meeting point
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            meetingPoint = slow;
            break;
        }
    }

    // Step 2: Check if a cycle exists
    if (meetingPoint == nullptr) {
        return nullptr; // No cycle
    }

    // Step 3: Find the starting node of the cycle ?
    ListNode* start = head;
    while (start != meetingPoint) {
        start = start->next;
        meetingPoint = meetingPoint->next;
    }

    return start; // Starting node of the cycle
}







*/

//babbar methods

/*    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}

*/

//by revesre the list pending