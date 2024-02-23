#include<iostream>
//#include<stack>
using namespace std;

int main(){
    int num;
    cout<<"enter your number"<<endl;
    cin>>num;
    int sum=0;
    for(int i=0;i<=num;i++){
      sum=sum+i;
    }
   cout<<"The sum is: "<<sum<<endl;
   int digit_sum=0;
 //  stack <int> s;
while(sum!=0){
   
 int digit=sum%10;
// s.push(digit);
 //cout<<s.size();
 digit_sum=digit_sum+digit;
 /* int num=s.top();
 for(int i=2;i<num;i++){

   if(num==0||num==1){
    cout<<"prime for"<<num<<endl;
   }
   else if(num%2==0){
    cout<<num<<" not prime for "<<i<<endl;
    cout<<endl;
  }
  else{
    cout<<num<<" prime for "<<i<<endl;
    cout<<endl;
  }
 } */
if(digit==0||digit==1||digit==2){
  cout<<digit<<" is prime"<<endl;
}
/* if(digit==2){
  cout<<"2 is prime number"<<endl;
} */
for(int i=2;i<digit;i++){

  if(digit%i==0){
   
   cout<<digit<<" is not prime  "<<endl;
   break;
}

cout<<digit<<" is prime for :"<<i<<endl;



}
cout<<endl;

 sum=sum/10;

}
cout<<"digit sum is : "<<digit_sum<<endl;
return 0;


}