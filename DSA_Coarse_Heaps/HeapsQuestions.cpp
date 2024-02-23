/* 
// logic for kth smallest and kth largest
// use minheap logic for kth largest element

int kthsmallest(int arr[],int l,int r,int k){
    priority_queue<int>pq;//maxheap
     //step 1:

     for(int i=0;i<k;i++){
        pq.push(arr[i]);
     }

    //step 2:

    for(int i=k;i<=r;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    //step 3:

    int ans=pq.top();
    return ans;
}

*/

/* 

   //logic for a binary tree is heap
   class Solution {

    int coutNodes(struct Node* root){
            
       if(root==NULL){
        return 0;
       }
        int ans=1+countNodes(root->left)+countNodes(root->right);
        return ans;
    }

    bool isCBT(struct Node* root,int index,int totalCount){
         if(root==NULL)
         return true;

         if(index>=totalCount)
         return false;

         else {
            bool left=isCBT(root->left,2*index+1,totalCount);
            bool right=isCBT(root->right,2*index+2,totalCount);

            return left && right;
         }
    }

    bool isMaxHeap(struct Node* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        if(root->right==NULL){
            return root->data > root->left->data;
        }
        else {
            bool left=isMaxHeap(root->left);
            bool right=isMaxHeap(root->right);

            return (left && right && (root->data > root->left->data && root->data > root->right->data));
        }
    }

    public:
         bool isHeap(struct Node* root){
            int index=0;
            int totalCount=countNodes(root);
            if(isCBT(root,index,totalCount) && isMaxHeap(root)){
                return true;
            }
            else {
                return false;
            }
         }
   };

*/

/*  
//logic for merge two binary tree

void heapify(vector <int> &arr,int n,int i){

        int largest=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left < n && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<n && arr[largest]<arr[right]){
            largest=right;
        }

        if(largest != i){//value is change
              
              swap(arr[largest],arr[i]);
              heapify(arr,n,largest);

        }  
    }

   vector <int> mergeHeap(vector<int>&a,vector<int>&b,int n,int m){

    //step1: merge both array 

    vector<int>ans;
    for(auto i:a)
        ans.push_back(i);
    for(auto i:b)
        ans.push_back(i);

    //step2: build heap using merged array
    int size=ans.size();
    for(int i=size/2-1;i>=0;i--){
        heapify(ans,size,i);
    }
     return ans;
    }
   };

*/

/* 

//minimum cost of ropes


public:

long long minCost(long long arr[],long long n) {

    priority_queue<long long ,vector<long long >,greater<long long > > pq;//this is mean heap

    for(int i=0;i<n;i++) {
        pq.push(arr[i]);
    }

    long long cost=0;

    while(pq.size() > 1){
        long long a=pq.top();
        pq.pop();

        long long b=pq.top();
        pq.pop();

        long long sum=a+b;
        cost += sum;

        pq.push(sum);
    }

    return cost;

//logic for convert bst into minheap

}


*/