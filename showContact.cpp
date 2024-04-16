#include<iostream>
#include<string>
using namespace std;

#include"contactBook.h"
void showContact(struct contactBook *p){
    if(p->size == 0){
        cout<<"at present, you do not have any contacts !\n";

    }else{
        cout<<"---------------all contacts---------------\n";
        for(int i = 0; i < p->size; i++ ){
            cout<<"name:\t"<<p->person[i].name<<"\tgender:\t";
            cout<<(p->person[i].gender == 1? "male" : "female")<<"\tphone#:\t";
            cout<<p->person[i].phoneNum<<endl;
        }

        cout<<"------------all contacts above-------------\n";
    }
    
}