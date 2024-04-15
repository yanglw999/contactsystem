#include<iostream>
#include<string>
using namespace std;

#include"contactBook.h"
void showContact(struct contactBook *p){
    if(p->size == 0){
        cout<<"at present, you do not have any contacts !\n";

    }else{
        for(int i = 0; i < p->size; i++ ){
            cout<<"name:\t"<<p->person[p->size].name<<"\tgender:\t";
            cout<<(p->person[p->size].gender == 1? "male" : "female")<<"\tphone#:\t";
            cout<<p->person[p->size].phoneNum<<endl;
        }
    }
    
}