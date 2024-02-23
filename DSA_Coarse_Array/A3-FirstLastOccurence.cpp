#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int key){

    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
    
        else if(key>arr[mid]){
           s=mid+1;

    }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
}  
     return ans; 

}

int lastoccurence(int arr[],int n,int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
    
        else if(key>arr[mid]){
           s=mid+1;

    }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
}  
     return ans; 
}

int main(){

int arr[7]={1,2,3,3,3,4,5};

int a=firstoccurence(arr,7,3);
int b=lastoccurence(arr,7,3);
cout<<"the first occurance is " <<a<<endl;
cout<<"the last occurance is " <<b<<endl;

return 0;


}