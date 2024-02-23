#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    //base case
    //element not found

    if(s>e)
    return false;
    int mid=s+(e-s)/2;

    //element found
    if(arr[mid]==key)
    return true;

    if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }

}

int main(){
    int arr[6]={2,4,6,8,10,12};
    int size=6;
    int key=11;
    cout<<"present or not :"<<binarysearch(arr,0,size-1,key);
    return 0;
}