#include<iostream>
#include<string>
#include"selectMenu.h"
#include"keyInput.h"
#include"addContact.h"
#include"showContact.h"
#include"contactBook.h"
#include"deleteContact.h"
#include"searchContact.h"
#include"modifyContact.h"
#include"cleanContact.h"
using namespace std;
  // this must be in main() with instance
  // it does not work in seperate file 
void selectMenu(int key, struct contactBook *books){
     //struct contactBook books;
            switch (key)
            {
                case 0 : // exit
                    cout<<"good bye"<<endl;
                    system("pause");
                   // return 0;
                    break;
                case 1 : 
                    addContact(books);
                    break;
                // add
                    
                case 2 : 
                    showContact(books);
                    cout<<"2 done\n";

                    break;
                // show
                    
                case 3 : {// delete
                    deleteContact(books);
                    break;}
                case 4 : { 
                    searchContact(books);
                    break;
                }//search
                   
                case 5 : // modify
                    {modifyContact(books);}
                    break;
                case 6 : //clear
                    {cleanContact(books);}
                    break;
                                                
                default:
                    break;
            
            }          
}