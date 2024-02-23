#include<bits/stdc++.h>
using namespace std;

int count(vector<int>&num,int k){
    int n=num.size();

    vector<int> prev(k+1,0);
    prev[0]=1;

    if(num[0]<=k)
          prev[num[0]]=1;
        
        for(int ind=1;ind<n;ind++){
            vector<int>curr(k+1,0);
            curr[0]=1;
            for(int target=1;target<=k;target++){
                int notTaken=prev[target];
                int taken=0;
                   if(num[ind]<=target)
                      taken=prev[target-num[ind]];
                    
                 curr[target]=notTaken+taken;
            }
            prev=curr;
        }
        return prev[k];
}

int main() {
    vector<int> arr={1,2,2,3};
    int totSum=0;
    int d=2;
    for(auto it :arr) totSum += it;
    if(totSum - d < 0 || (totSum - d) %2 ) return false;
    return count(arr,(totSum-d)/2);
}