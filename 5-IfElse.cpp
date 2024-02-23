#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch >='A'&& ch <='Z'){
    cout<<"letter is uppercase"<<endl;
}
else if(ch >='a'&& ch <='z') {
    cout<<"letter is lowercase"<<endl;
}
else if(ch >='0'&& ch <='9'){
    cout<<"this is digit"<<endl;
}
return 0;

}