#include<iostream>
using namespace std;

class Student{

    int Roll_no;
    string name;
    string branch;
    //string address;

    public:

    void Attendence();
    void Attendence_report();
    int Unit();
    void Read_data();



};

void Student :: Attendence(){
    int Theory1;
    int Theory2;
    cout<<"enter the attendence of student for theory1 out of 100 : "<<endl;
    cin>>Theory1;
    cout<<"enter the attendence of student for theory2 out of 100: "<<endl;
    cin>>Theory2;

}

void Student :: Attendence_report() {
    int month;
    cout<<"enter the month to see the deatails of student"<<endl;
    cin>>month;
}

int Student :: Unit(){
    int mark1;
   // cin>>mark1;
    int mark2;
   // cin>>mark2;
    int mark3;
  //  cin>>mark3;

    cout<<"enter the mark1 of student"<<endl;
    cin>>mark1;
    cout<<"enter the mark2 of student"<<endl;
    cin>>mark2;
    cout<<"enter the mark3 of student"<<endl;
    cin>>mark3;

}

void Student :: Read_data(){
    cout<<"Enter Roll Number: "<<endl;
    cin>>Roll_no;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your branch name: "<<endl;
    cin>>branch;
    
}

int main(){
    Student S;
    
        S.Read_data();
        S.Attendence();
        S.Attendence_report();
        S.Unit();
        
    

    return 0;
}

