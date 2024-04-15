#include<iostream>
#include"isExist.h"
#include<string>
using namespace std;
// $$$ using int is better bool

/*bool isExist(struct contactBook p){
    cout<<"please enter the contact's name: ";
    string obj;
    cin >> obj;
    for(int i = 0; i < p.size; i++){
        if(p.person[i].name == obj){
            return true;
        }
    }
    return fale;
    
}*/
int isExist(struct contactBook *p){
    cout<<"please enter the contact's name: ";
    string obj;
    cin >> obj;
    for(int i = 0; i < p->size; i++){
        if(p->person[i].name == obj){
            return i;
        }
    }
    return -1;
}