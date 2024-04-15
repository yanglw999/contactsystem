#include <iosfwd>
#include<string>
#include"reshowMenu.h"
#include"selectMenu.h"
#include"contactBook.h"
using namespace std;

int main(){
    struct contactBook book;
    book.size = 0;//initialize the size $$$

    reshowMenu(&book);
    
}