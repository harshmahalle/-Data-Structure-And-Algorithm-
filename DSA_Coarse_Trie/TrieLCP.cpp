#include<iostream>
#include<vector>
using namespace std;

string LongestCommonPrefix(vector<string>&arr,int n) {

    string ans="";

    //for traversing all characters of first string
    for (int i=0;i<arr[0].length();i++){
        char ch=arr[0][i];//most imp when string is given in array and we have to access first character

        bool match=true;

        //for comparing ch with rest of the string 
        for(int j =1;j<n;j++){
            //not match
            if(arr[j].size()<i || ch != arr[j][i]){ //?
                match = false;
                break;           
            }
        }

        if(match==false)
          break;
        else 
           ans.push_back(ch);
    }

    return ans;
}