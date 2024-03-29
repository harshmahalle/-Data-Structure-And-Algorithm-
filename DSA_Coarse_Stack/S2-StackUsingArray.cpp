#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    public:
      int *arr;
      int top;
      int size;

      //behaviour
    Stack(int size){
        this -> size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(! isfull() /* size-top>1 */){
            top++;
            arr[top]=element;
        }
        else {
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else {
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0)
            return arr[top];
        else {
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isfull(){
        if(top==size)
        return 1;
        else
        return 0;
    }

};

int main(){
     
     Stack st(5);

     st.push(22);
     st.push(33);
     st.push(45);
     st.push(56);
     st.push(90);

     cout<<st.peek()<<endl;

     st.pop();
    
    cout<<st.peek()<<endl;
     
     st.pop();
    
    cout<<st.peek()<<endl;
     
     st.pop();
    
    cout<<st.peek()<<endl;
     
     st.pop();

     if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
     else{
        cout<<"stack is not empty"<<endl;
     }
    


    /*

    //creation of stack
    stack<int>s;
    
    //push operation
    s.push(2);
    s.push(3);
    s.push(5);


    //pop operation
    s.pop();

    cout<<"printing top element"<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

   cout<<"size of stack is "<<s.size()<<endl;

*/

    
    return 0;
}