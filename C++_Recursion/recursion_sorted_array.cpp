#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
    if(size ==0 ||size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        cout<<size<<endl;
    return false;
    }
    else{
        bool remainingpart=issorted(arr+1,size-1);
        cout<<remainingpart<<endl;
        return remainingpart;
    }
}


int main(){
int arr[5]={2,4,6,11,10};
int size=5;

bool ans=issorted(arr,size);
if(ans){
    cout<<"array is sorted"<<endl;

}
else{
    cout<<"array is unsorted"<<endl;

}
return 0;
}