#include<iostream>
using namespace std;

int bubblesort( int arr[],int n){
for(int i=1;i<n;i++){
    //for round n-1
    bool swapped=false;

    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
if(swapped==false){
    //already sorted
    break;
}   

     cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
     cout<<arr[2]<<endl;
     cout<<arr[3]<<endl;
     cout<<arr[4]<<endl;

}
}
int main(){
int arr[5]={32,23,67,11,35};
int a=bubblesort(arr,5);

return 0;

}

