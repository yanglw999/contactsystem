#include<iostream>
#include"addContact.h"
#include"contactBook.h"

using namespace std;
void addContact(struct contactBook *p){
    if(p->size == MAX){
        cout<<"no space for new contacts!"<<endl;
    }else{
        cout<<"name: ";
        cin >> (*p).person[p->size].name; 
      
        cout<<"gender(male: 1, female: 2): ";
        while(true){
            int sex ;
            cin>> sex;
            if(sex == 1 || sex == 2){
                 p->person[p->size].gender = sex;
                 break;
            }else{
                cout<<"please re-input right num: ";
            }
        }
       
        cout<<"phone#: ";
        cin>> p->person[p->size].phoneNum;
        cout<<"new contact has been added!\n";
         // p++; 
         p->size++;
        // system("pause");// please press any key to continue
        // system("clear");//clear the screen, windows: system("cls")
    }
   
}