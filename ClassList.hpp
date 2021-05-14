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
#define W 20

using namespace std;

class aList
{
public:
    
    int index;
    string pname;
    int price;
    
    aList();
    ~aList();
};

class pList : public aList
{
public:
    
    string weight;
    int amount;
    
    unsigned real;
    void input(int real);
    void print();
    void edit();
    pList();
    ~pList();
};

#endif /* ClassList_hpp */
