#include<iostream>
#include"cleanContact.h"
using namespace std;
void cleanContact(struct contactBook *p ){
    cout<<"do you really want to clean all contacts? y/n: ";
    char ch;
    cin>> ch;
    if(ch == 'y'|| ch == 'Y'){
         p->size = 0;
        cout<<"the contacts have been cleaned !"<<endl;
    }
   
   // system("pause");
   // system("clear");
}