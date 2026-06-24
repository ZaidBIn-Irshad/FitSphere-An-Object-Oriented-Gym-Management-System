#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"

class Member : public Person
{
private:
    string membershipType;
    double fees;

public:
    Member();
    Member(int, string, int, string, double);

    void display();

    int getId();
    string getName();
    int getAge();
    string getMembership();
    double getFees();

    ~Member();
};

#endif