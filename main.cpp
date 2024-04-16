#include <iosfwd>
#include<string>
#include"reshowMenu.h"
#include"selectMenu.h"
#include"contactBook.h"
#include"keyInput.h"
#include"addContact.h"
#include"showContact.h"
#include"contactBook.h"
#include"deleteContact.h"
#include"searchContact.h"
#include"modifyContact.h"
#include"cleanContact.h"
#include<stdlib.h>
using namespace std;

int main(){
    struct contactBook books;
    books.size = 0;//initialize the size $$$    
    while(true){
         int k;
         keyInput(&k);
       
            switch (k)
            {
                case 0 : // exit
                    cout<<"CONTACT BOOK EXITED!"<<endl;
                  //  system("pause");
                    return 0;
                    break;
                case 1 : 
                    addContact(&books);
                    break;
                // add
                    
                case 2 : 
                    showContact(&books);
                    break;            
                case 3 : {// delete
                    deleteContact(&books);
                    break;}
                case 4 : { 
                    searchContact(&books);
                    break;
                }//search
                   
                case 5 : // modify
                    {modifyContact(&books);}
                    break;
                case 6 : //clear
                    {cleanContact(&books);}
                    break;
                                                
                default:
                    break;
            
            }
         
    }

     
}
   
    
