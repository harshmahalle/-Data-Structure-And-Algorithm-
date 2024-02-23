#include<iostream>
using namespace std;

bool ispresent(int arr[][3],int target,int row,int col){
   for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
   }
   return 0;
}

int main(){
    //creating 2d array
    int arr[3][3];
   // cout<<"enter the elements"<<endl;
   // int arr[3][3]={{1,2,3},{4,5,6},{8,8,7}};
 //  taking input-> row wise input
    for(int row=0; row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }

    }
   /* //taking input-> column wise input
    for(int col=0; col<3;col++){
        for(int row=0;row<3;row++){
            cin>>arr[row][col];
        }
}
*/
//printing the array
    for(int row=0; row<3;row++){
        for(int col=0;col<3;col++){
            cout <<arr[row][col]<<" ";
        }
     cout <<endl;

    }

 cout<<"enter the element the search"<<endl;
 int target;
 cin>>target;
 cout<<ispresent(arr,target,3,3)<<endl;
    
}

    