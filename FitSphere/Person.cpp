#include "Person.h"

Person::Person()
{
    id = 0;
    name = "";
    age = 0;
}

Person::Person(int i, string n, int a)
{
    id = i;
    name = n;
    age = a;
}

Person::~Person()
{
}