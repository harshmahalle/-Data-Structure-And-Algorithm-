#include<bits/stdc++.h>
using namespace std;

//this is space optimization approach
//TC:O(N)
//SC:O(N)

int main() {
    int n=5;

    int prev2=0;
    int prev=1;

    for(int i=2;i<=n;i++){
        int curr_i=prev2+prev;
        prev2=prev;
        prev=curr_i;
    }
    cout<<prev;
    return 0;
}