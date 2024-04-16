#include<iostream>
#include"deleteContact.h"
#include<string>
#include<stdlib.h>
using namespace std;
void deleteContact(struct contactBook *p){
    string obj ;
    
    if(p->size == 0) {
        cout<<"You do not have contacts to delete at present."<<endl;
        goto bottom;} // goto usage

    cout<<"please enter the name to delete: ";
    cin >> obj;
    
    for(int i = 0; i < p->size; i++){
        if(p->person[i].name == obj){//Q: how to delete the element in array?
                for(int j = i; j < p->size - 1; j++){
                    p->person[j].name = p->person[j+1].name;
                    p->person[j].gender = p->person[j+1].gender;
                    p->person[j].phoneNum = p->person[j+1].phoneNum;
                }
          //  p->person[p->size -1].name = "";
          //  p->person[p->size -1 ].gender = NULL;
          // p->person[p->size -1].phoneNum = "";
            cout<< "deletiing is done!"<<endl;
            p->size--;
            break;
        }
    }
    cout<<"no name matched!\n";

    bottom: ;
    
}
