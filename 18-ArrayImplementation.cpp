#include<iostream>
using namespace std;
int main(){
//declare an array
int mark[5];

//accessing an array of declaraation state
cout<<"the value at index 4 "<<mark[4]<<endl;

//intilizing an array
int marks[5]={10,25,76,99,56};

//accessing an array of declaraation state
cout <<"the value at index 4 "<<marks[4]<<endl;
cout <<"the value at index 2 "<<marks[2]<<endl;

//printing the array
for (int i=0;i<5;i++){
    cout<< marks[i]<<endl;
}

}