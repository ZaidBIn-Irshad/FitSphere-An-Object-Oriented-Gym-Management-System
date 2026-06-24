#include <iostream>
#include "GymManagement.h"

using namespace std;

int main()
{
    GymManagement gym;

    int choice;

    do
    {
        cout << "\n===== GYM MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Member";
        cout << "\n2. View Members";
        cout << "\n3. Add Trainer";
        cout << "\n4. View Trainers";
        cout << "\n5. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            gym.addMember();
            break;

        case 2:
            gym.viewMembers();
            break;

        case 3:
            gym.addTrainer();
            break;

        case 4:
            gym.viewTrainers();
            break;

        case 5:
            cout << "Thank You";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}