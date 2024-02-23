#include<iostream>
#include<stack>
#include<queue>
using namespace std;

vector <long long >printfirstnegativeinteger(long long int A[],long long int N,long long int K){

    deque<long long int>dq;
    vector<long long>ans;

    //process first window
    for(int i=0;i<K;i++)
    {
       
        if(A[i]<0){
            dq.push_back(i);
        }
       
    }
    //push ans for first window
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    //now process for remaining window
    for(int i=K;i<N;i++){
        //first pop out of window element
        if(!dq.empty()&&(i-dq.front()>=K)){//?basically use for range or we can use this same dq.size() >= K not understand pending dekhte age
            dq.pop_front();
        }
        //then push current element
        if(A[i]<0)
        dq.push_back(i);

        //put in ans
        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}