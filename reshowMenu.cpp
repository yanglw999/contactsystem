#include<iostream>
#include<string>
#include"keyInput.h"
#include"selectMenu.h"
#include"showMenu.h"
#include"contactBook.h"
using namespace std;
void reshowMenu(struct contactBook *b){
    
    while(true){
         int k;
         keyInput(&k);
         selectMenu(k, b);
         //showMenu();
        
       
    
    }
   
}
