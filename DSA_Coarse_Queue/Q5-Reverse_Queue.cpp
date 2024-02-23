#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int>rev(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
    return q;

}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    queue<int> ans=rev(q);
 /* for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<endl;*/
}