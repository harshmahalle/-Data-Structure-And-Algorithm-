#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number: "<<endl;
    cin>>n;
    /*  int i=1;
    int table=1;
while(i<=10){
    table=i*n;
    i++;
    cout<<table<<endl;
}*/
    int table=1;
    for(int i=1;i<=10;i++){
        table=i*n;
        cout<<table<<endl;
    }
   

   return 0;

}

