//calculating ncr
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;

}
int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;

}
int main(){
    int n,r;
    cin >>n>>r;
    int answer=nCr(n,r);
    cout<<"answer is"<<answer<<endl;//we can use ncr(n,r) in place of answer no need to declare new variable
    return 0;
}