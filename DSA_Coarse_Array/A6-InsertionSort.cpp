#include<iostream>
using namespace std;

int insertionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            //shift
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
             else{//ruk jao
                break;
             }
        }
       arr[j+1]=temp;
}//not proper code,not optimised
     cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
     cout<<arr[2]<<endl;
     cout<<arr[3]<<endl;
     cout<<arr[4]<<endl;

}

int main(){
int arr[5]={32,23,67,11,35};
int a=insertionsort(arr,5);

return 0;

}

