#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {-1, -3, -10 , 0 , 60};
    int n = 5;
    int maxSum = -arr[0]; //hamdle case when first value is negative
    int ans = 0;
    for(int i = 1 ; i < n ; i++) {

        cout<<"ans : " << ans<<endl;

        if(arr[i] < 0) arr[i] = -arr[i];
        cout<<"arr num " <<arr[i]<<endl;

        if(arr[i ] != 0) {
          int currSum = arr[i]*maxSum;
          cout<<"currsum :"<<currSum<<endl;
          maxSum = max(maxSum,currSum);
        }

        else{
            ans = max(ans,maxSum);
            maxSum = 1;
        }
          
    }

    if(ans>maxSum) {
        cout<<"final ans is " << ans << endl;
    }
    else{
        cout<<"final ans is " << maxSum << endl;
    }
    
}