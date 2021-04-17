//
//  ClassList.hpp
//  5.2 oop
//
//  Created by Dima Ilkiv on 16.04.2021.
//

#ifndef ClassList_hpp
#define ClassList_hpp

#include <stdio.h>
#include <string>

using namespace std;

class aList
{
public:
    aList();
  int price;
  int index;
  string pname;
   
    ~aList();
};

class pList : public aList
{
public:
    pList();
    unsigned real;
    string weight;
    int amount;
    void input(int real);
    void print();
    void edit();
    ~pList();
};

#endif /* ClassList_hpp */
