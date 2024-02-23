#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';//ascci value concept apply here
        return temp;
    }
}

bool checkpalindrome(char a[],int n){

int s=0;
int e=n-1;
while(s<=e){
    if(tolowercase(a[s]) != tolowercase(a[e])){
          return 0;
    }
    else{
          s++;
          e--;
    }

}
       return 1;


}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlenght(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"your name is "<<endl;
    cin>>name;
    cout<<name<<endl;
    //for lenght
    int len=getlenght(name);
    cout<<"length "<<len<<endl;
    //reverse character array
    reverse(name,len);
    cout<<"your name is "<<endl;
    cout<<name<<endl;
    //check palindrome or not
    cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;

    return 0;
}