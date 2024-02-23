#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:
           string FirstNonRepeating(string A) {
            map<char,int>count;
            string ans=" ";
            queue<char>q;

            for(int i=0;i<A.length();i++){
                char ch=A[i];
                q.push(ch);
                count[ch]++;

                while(!q.empty()){
                    if(count[q.front()]>1){
                        q.pop();
                    }
                    else{
                        ans.push_back(q.front());
                        break;//imp
                    }
                }
                if(q.empty()){
                    ans.push_back('#');
                }
            }
            return ans;

           }
};