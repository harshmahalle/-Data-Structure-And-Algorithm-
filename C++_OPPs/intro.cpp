#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timetocomplete;

    //constructer concept
    Hero(){
        cout<<"simple constructor called"<<endl;
    }

    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    // manually copy constructer

    Hero(Hero& temp){

       char *ch=new char[strlen(temp.name)+1];
       strcpy(ch,temp.name);
       this->name=ch;
       cout<<"copy constructer called"<<endl;
       this->health=temp.health;
       this->level=temp.level;

    }

    void print(){
        cout<<"[name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"leve:  "<<this->level<<" ]";
        cout<<endl<<endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level=ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    //destructer
    ~Hero(){
        cout<<"distructer bhai called"<<endl;
    }
};

int Hero::timetocomplete=5;

int main(){


//static
Hero a;
//dynamic
Hero *b=new Hero();
//manually destructer called
delete b;




 /* cout<<Hero::timetocomplete<<endl;
   Hero a;
   cout<<a.timetocomplete<<endl;*/




 /* 
  //creation of object
  Hero ramesh;
  cout<<"size of ramesh is:"<<sizeof(ramesh)<<endl;

  //use getter
  cout<<"health of ramesh is"<<ramesh.gethealth()<<endl;
  
  //use setter
  ramesh.sethealth(70);
  ramesh.level='a';

  cout<<"health of ramesh is"<<ramesh.gethealth()<<endl;
  cout<<"level is"<<ramesh.level<<endl;
*/

/*
  //static allocation
  Hero a;
  a.sethealth(80);
  a.setlevel('b');
  cout<<"level is"<<a.level<<endl;
  cout<<"health is"<<a.gethealth()<<endl;

  //dynamic allocation
  Hero *b=new Hero;
  b->setlevel('a');
  b->sethealth(60);
 //using dot operator
  cout<<"level is"<<(*b).level<<endl;
  cout<<"health is"<<(*b).gethealth()<<endl;
//using -> operator
  cout<<"level is"<<b->level<<endl;
  cout<<"health is"<<b->gethealth()<<endl;
*/

//copy constructer
//default copy constructer
 /* 
 
Hero h1(89,'c');
cout<<h1.gethealth()<<endl;
cout<<h1.level<<endl;

Hero h2(h1);
//Hero h2=h1;
cout<<h2.gethealth()<<endl;
cout<<h2.level<<endl;

*/

return 0;

}