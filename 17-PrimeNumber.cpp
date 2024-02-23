//calculating prime number
#include<iostream>
using namespace std;
//0-> not a prime
//1-> prime 


bool isprime(int n){
    for(int i=2;i<n;i++){
    if(n%2==0){
     return 0;
    }
  }
return 1;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"is a prime number"<<endl;

    }
    else{
        cout<<"not a prime number"<<endl;
    }

    
}