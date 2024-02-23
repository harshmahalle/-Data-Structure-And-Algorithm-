//while loops problem
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
//print 1 to n
    while(i<=n){
        cout<<"the numbers are"<<i<<endl;
        i=i+1;
    }

//find sum from 1 to n
    int sum=0;
     while(i<=n){
        sum=sum+i;
        i=i+1;
    }
     cout<<"the sum are"<<sum<<endl;

//find the sum of all even numbers 1 to n
    int i=2;
    int sum=0;
    while(i<=n){
        if(i%2==0) 
        sum=sum+i;
        i=i+2;
    }
     cout<<"the sum  of even numbers are"<<sum<<endl;

//find the sum of all odd numbers 1 to n     
    int i=0;
    int sum=0;
    while(i<=n){
        if(i%2 != 0) 
        sum=sum+i;
        i=i+1;
    }
     cout<<"the sum  of even numbers are"<<sum<<endl;

//find the prime number
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
        cout<<"not prime"<<endl;
       }
        i=i+1;
        cout<<"prime"<<endl;
  }
}  