#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
    //base case
    if(size==0)
    return false;

    if(arr[0]==key){
        cout<<"the key is"<<key<<endl;
        return true;
       // cout<<"the key is"<<key<<endl;
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        //cout<<remainingpart<<endl;
        return remainingpart;

    }

}

int main(){
int arr[5]={2,4,6,11,10};
int size=5;
int key;
cin>>key;

bool ans=linearsearch(arr,size,key);
if(ans){
    cout<<"present"<<endl;

}
else{
    cout<<"absent"<<endl;

}
return 0;
}
