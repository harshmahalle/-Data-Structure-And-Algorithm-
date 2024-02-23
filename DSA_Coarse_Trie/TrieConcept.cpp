#include<iostream>
using namespace std;

class TrieNode {

    public:
         char data;
         TrieNode* children[26];
         bool isTerminal;

         TrieNode(char ch) {
            this-> data=ch;
            for(int i=0;i<26;i++) {
                children[i]=NULL;
            }
            isTerminal=false;

         }
};

class Trie {

    public:
         TrieNode* root;

         Trie (){
         root=new TrieNode('\0');
         } 

         //Logic for Insertion

         void insertUntil(TrieNode* root,string word) {
           
           //base case
           if(word.length()==0) {
            root->isTerminal=true;
            return;
           }

           //assuming word will be in CAPS
           int index=word[0]-'A';
           TrieNode* child;

           //present
           if(root->children[index] != NULL) {
            child=root->children[index];
           }
           else {
            //absent
             child=new TrieNode(word[0]);
             root->children[index]=child;
           }

           //recursion
           insertUntil(child,word.substr(1));
       }

       void insertWord(string word) {
            
            insertUntil(root,word);
       }

       //Logic for Searching

       bool searchUtil(TrieNode* root,string word) {

        //base case
        if(word.length()==0) {
            return root->isTerminal;
        }

        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL) {
            child=root->children[index];
        }
        else {
            //absent
            return false;
        }

        //recursion
        return searchUtil(child,word.substr(1));

       }

       bool searchWord(string word) {
        return searchUtil(root,word);
       }

       //Logic for Deletion

       void removeUtil(TrieNode* root,string word ) {
        //base case
         
         if(word.length()==0) {
            root->isTerminal=false;
            return;
           
         }

         int index=word[0]-'A';
          TrieNode* child;

          //present
          if(root->children[index]!=NULL){
            child=root->children[index];
          }
          else {
            //absent
             child=new TrieNode(word[0]);
             root->children[index]=child;
           }

           //recursion
           insertUntil(child,word.substr(1));

       }

       void removeWord(string word) {
         return removeUtil(root,word);
       }

};

int main(){

      Trie *t=new Trie();
      t->insertWord("ARM");
      t->insertWord("DO");
      t->insertWord("TIME");

      cout<<"Present or Not "<< t->searchWord("DO")<<endl;

      t->removeWord("DO");

      cout<<"Present or Not "<< t->searchWord("DO")<<endl;
      return 0;
}