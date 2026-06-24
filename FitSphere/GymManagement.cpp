#include "GymManagement.h"
#include "Member.h"
#include "Trainer.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void GymManagement::addMember()
{
    int id, age;
    string name, membership;
    double fees;

    cout << "ID: ";
    cin >> id;

    cin.ignore();

    cout << "Name: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cin.ignore();

    cout << "Membership: ";
    getline(cin, membership);

    cout << "Fees: ";
    cin >> fees;

    std::ofstream file{std::string("members.txt"), std::ios::app};

    file << id << ","
         << name << ","
         << age << ","
         << membership << ","
         << fees << endl;

    file.close();

    cout << "Member Added.\n";
}

void GymManagement::viewMembers()
{
    std::ifstream file{std::string("members.txt")};

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void GymManagement::addTrainer()
{
    int id, age;
    string name, specialization;
    double salary;

    cout << "ID: ";
    cin >> id;

    cin.ignore();

    cout << "Name: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cin.ignore();

    cout << "Specialization: ";
    getline(cin, specialization);

    cout << "Salary: ";
    cin >> salary;

    std::ofstream file{std::string("trainers.txt"), std::ios::app};

    file << id << ","
         << name << ","
         << age << ","
         << specialization << ","
         << salary << endl;

    file.close();

    cout << "Trainer Added.\n";
}

void GymManagement::viewTrainers()
{
    std::ifstream file{std::string("trainers.txt")};

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}