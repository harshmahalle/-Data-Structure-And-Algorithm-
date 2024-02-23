#include<iostream>
using namespace std;

int selectionsort( int arr[],int n){

     for(int i=0;i<n-1;i++){
        int minindex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
             minindex=j;
        }
        swap(arr[minindex],arr[i]);
     }
       
     cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
     cout<<arr[2]<<endl;
     cout<<arr[3]<<endl;
     cout<<arr[4]<<endl;
}

int main(){
int arr[5]={32,23,67,11,35};
int a=selectionsort(arr,5);


}