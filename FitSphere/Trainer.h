#ifndef TRAINER_H
#define TRAINER_H

#include "Person.h"

class Trainer : public Person
{
private:
    string specialization;
    double salary;

public:
    Trainer();
    Trainer(int, string, int,
            string, double);

    void display();

    int getId();
    string getSpecialization();
    double getSalary();

    ~Trainer();
};

#endif