#include "Trainer.h"
#include <iostream>

using namespace std;

Trainer::Trainer()
{
    specialization = "";
    salary = 0;
}

Trainer::Trainer(int i, string n, int a,
                 string s, double sal)
    : Person(i, n, a)
{
    specialization = s;
    salary = sal;
}

void Trainer::display()
{
    cout << "\nTrainer ID: " << id;
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nSpecialization: "
         << specialization;
    cout << "\nSalary: "
         << salary << endl;
}

int Trainer::getId()
{
    return id;
}

string Trainer::getSpecialization()
{
    return specialization;
}

double Trainer::getSalary()
{
    return salary;
}

Trainer::~Trainer()
{
}