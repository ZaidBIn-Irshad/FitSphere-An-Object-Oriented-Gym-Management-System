#include "Member.h"
#include <iostream>

using namespace std;

Member::Member()
{
    membershipType = "";
    fees = 0;
}

Member::Member(int i, string n, int a,
               string m, double f)
    : Person(i, n, a)
{
    membershipType = m;
    fees = f;
}

void Member::display()
{
    cout << "\nMember ID: " << id;
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nMembership: " << membershipType;
    cout << "\nFees: " << fees << endl;
}

int Member::getId()
{
    return id;
}

string Member::getName()
{
    return name;
}

int Member::getAge()
{
    return age;
}

string Member::getMembership()
{
    return membershipType;
}

double Member::getFees()
{
    return fees;
}

Member::~Member()
{
}