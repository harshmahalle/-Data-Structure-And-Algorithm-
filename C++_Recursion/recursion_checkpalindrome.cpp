#include<iostream>
using namespace std;

bool checkpalindrome(string str,int i,int j){
    cout<<"call received for:"<<str<<endl;    
    //base case
    if(i>j)
    return true;

    if(str[i] != str[j])
    return false;
    else{
        return checkpalindrome(str,i+1,j-1);
    }

}

int main(){
 string name="noon";
 bool ispalindrome=checkpalindrome(name,0,name.length()-1);
 if(ispalindrome){
    cout<<"its pallindrome"<<endl;
 }
 else{
    cout<<"its not palindrome"<<endl;
 }
 return 0;
}