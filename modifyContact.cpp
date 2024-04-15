#include<iostream>
#include"modifyContact.h"
#include<string>
#include"isExist.h"
using namespace std;
void modifyContact(struct contactBook *p){
    int v = isExist(p); //$$$ int isExist(struct contactBook *p);
    if(v != -1){
        cout<<"the contact to modiy is existing, please go ahead!"<<endl;
        cout<<"name: ";
        cin>>p->person[v].name;

        cout<<"gender(male: 1, female: 2): ";
        while(true){
            int sex ;
            cin>> sex;
            if(sex == 1 || sex == 2){
                 p->person[v].gender = sex;
                 break;
            }else{
                cout<<"please re-input right num: ";
            }
        }
        
        cout<<"phone#: ";
        cin>>p->person[v].phoneNum;



    }else{
        
        cout<< "the contact you try to modify does not exit!";

    }


 }
