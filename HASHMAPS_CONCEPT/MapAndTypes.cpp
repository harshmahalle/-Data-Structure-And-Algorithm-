#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

    //creation

    unordered_map<string,int>m;

    //insertion

    //1 st methodh

    pair<string,int>p=make_pair("harsh",3);
    m.insert(p);

    //2 nd methodh

    pair<string,int>pair2("mahalle",2);
    m.insert(pair2);

    //3 rd methodh

    m["my"]=1; //here in map key and value is created

    //what will happen in below case
    m["my"]=2; //if we insert the new value in same key so no new key is created updation happen in previous key basically updation

    //searching
    cout<<m["my"]<<endl;
   // cout<<m.at("unknownKey")<<endl;

    cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence

    cout<<m.count("harsh")<<endl;

    //erase
    m.erase("mahalle");
    cout<<m.size()<<endl;
    
    //1st methodh to print
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //2nd methodh to traverse or print

    //iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;

}