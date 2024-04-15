#include<iostream>
#include"keyInput.h"
#include<string>
#include"showMenu.h"
using namespace std;
void keyInput(int *key){
    showMenu();
    
  
      while(true){
        int k;
        cin >> k;
        if (k == 0 || k == 1 || k == 2 || k ==3 || k == 4 || k == 5 || k == 6 ){
              *key = k;
              cout<<"the key is correct!\n";
            break;
        }else {
           
            cout<<"the key is incorrect, please re-enter!"<<endl;
            showMenu();
           
        }
       
    }
}