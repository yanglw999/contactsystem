#ifndef _CONTACTBOOK_H_
#define _CONTACTBOOK_H_
#include <iostream>
#include<string>
#include"person.h"
using namespace std;
#define MAX 1000
struct contactBook{
   
    int size ;// this is equal to a class, not an instance, so can not give the member value
    struct person person[MAX];
};
#endif
