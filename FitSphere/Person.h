#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    int age;

public:
    Person();
    Person(int, string, int);

    virtual void display() = 0;

    virtual ~Person();
};

#endif