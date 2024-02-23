//calculiting power
#include<iostream>
using namespace std;
int power(int n1,int n2 ){
    int ans=1;
    for(int i=1;i<=n2;i++){
    ans=ans*n1;

}
    return ans;
}
int main(){
    int c,d;
    cin>> c >> d ;
    int answer=power(c,d);
    cout<<"answer is "<<answer<<endl;
    return 0;
}