#include<iostream>
#include<string>
#include"searchContact.h"
#include"isExist.h"
void searchContact(struct contactBook * p){
    int v = isExist(p);
    if(v != -1){
        cout<<"contact you searched is as below:"<<endl;
        cout<<"name:\t"<<p->person[v].name;
        cout<<"\tgender:\t"<<(p->person[v].gender == 1? "male" : "female"); // () is required
        cout<<"\tphone#:\t"<<p->person[v].phoneNum<<endl;

    }else{
        cout<<"the contact searched is not existing !\n";
    }
    //system("pause");
   // system("clear");//system("cls");

}