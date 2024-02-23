#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}
int main(){
  
    int key;
    cin>>key;
    int num[5]={4,8,9,-2,7};
    bool found=search(num,5,key);

  if(found){
    cout<<"the key is present"<<endl;

  }
  else{
    cout<<"the key is absent"<<endl;

  }
  return 0;
}