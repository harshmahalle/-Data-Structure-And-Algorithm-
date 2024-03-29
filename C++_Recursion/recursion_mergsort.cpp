#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid =s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //copy values
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];

    }

    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
        
    }
//merge two sorted array
int index1=0;
int index2=0;
mainarrayindex=s;

while(index1< len1 && index2 < len2){
    if(first[index1]<second[index2]){
        arr[mainarrayindex++]=first[index1++];
    }
    else{
        arr[mainarrayindex++]=second[index2++];
    }
    
}

while(index1< len1){
    arr[mainarrayindex++]=first[index1++];
}
while(index2< len2){
    arr[mainarrayindex++]=second[index2++];
}
   //delete []first;
   //delete []second;
}

void mergesort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

//left part sort

for(int s=0;s<=mid;s++){
    cout<<arr[s]<<" "<<endl;
}cout<<endl;


mergesort(arr,s,mid);

//right part sort karna h bhai

/*for(int mid;mid<e;(mid+1++){
    cout<<arr[mid+1]<<" "<<endl;
}cout<<endl;*/

mergesort(arr,mid+1,e);

//merge
for(int s=0;s<=e;s++){
    cout<<arr[s]<<" "<<endl;
} cout<<endl;
merge(arr,s,e);

}

int main(){
    int arr[6]={3,1,4,2,5,0};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}