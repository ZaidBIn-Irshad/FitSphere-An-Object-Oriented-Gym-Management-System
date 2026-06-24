# FitSphere-An-Object-Oriented-Gym-Management-System

Project Overview

The Gym Management System is a console-based application developed in C++ using Object-Oriented Programming (OOP) principles. The purpose of this project is to manage gym members and trainers efficiently by providing functionalities such as adding and viewing member and trainer information. The project also demonstrates the practical implementation of core OOP concepts and file handling in C++.

This project is suitable for academic purposes and helps students understand how real-world management systems are designed using object-oriented techniques.

Objectives
Manage gym member records.
Manage trainer records.
Store data permanently using files.
Demonstrate Object-Oriented Programming concepts in C++.
Provide a simple menu-driven interface for users.
Features
Member Management
Add new members
View all registered members
Store member data in a text file
Trainer Management
Add new trainers
View all trainers
Store trainer data in a text file
File Handling
Save member information in members.txt
Save trainer information in trainers.txt
Read data from files whenever required
Technologies Used
Programming Language: C++
Compiler: GCC (g++)
IDE: Visual Studio Code
File Handling Library: <fstream>
Standard Libraries:
<iostream>
<fstream>
<string>
Object-Oriented Programming Concepts Implemented
1. Encapsulation
Data members are kept private or protected and are accessed through public member functions.

2. Inheritance
Member and Trainer classes inherit from the abstract Person class.

3. Abstraction
The Person class is an abstract class containing a pure virtual function display().

5. Polymorphism
The display() function is overridden in derived classes, demonstrating runtime polymorphism.

5. Constructors
Constructors are used to initialize objects with default or user-defined values.

6. Destructors
Destructors are used for object cleanup when objects are destroyed.

Project Structure
GymManagementSystem/
│
├── main.cpp
├── Person.h
├── Person.cpp
├── Member.h
├── Member.cpp
├── Trainer.h
├── Trainer.cpp
├── GymManagement.h
├── GymManagement.cpp
├── members.txt
└── trainers.txt

Class Diagram
                  Person (Abstract Class)
                  -----------------------
                  # id
                  # name
                  # age
                  -----------------------
                  + display() = 0
                         |
            -------------------------
            |                       |
         Member                  Trainer
         ------                  -------
         membershipType          specialization
         fees                    salary
         
Program Menu
===== GYM MANAGEMENT SYSTEM =====

1. Add Member
2. View Members
3. Add Trainer
4. View Trainers
5. Exit
Sample Output
===== GYM MANAGEMENT SYSTEM =====
1. Add Member
2. View Members
3. Add Trainer
4. View Trainers
5. Exit

Enter Choice: 1

ID: 101
Name: Ali Khan
Age: 22
Membership: Monthly
Fees: 3000

Member Added.

**How to Compile**
Method 1: Compile All Files
Open the terminal and run:

g++ main.cpp Person.cpp Member.cpp Trainer.cpp GymManagement.cpp -o app
Method 2: Compile All CPP Files Automatically
g++ *.cpp -o app
How to Run
Windows
.\app.exe
Linux/Mac
./app
Files Generated
members.txt

Stores member information:
101,Ali Khan,22,Monthly,3000
102,Ahmed Raza,25,Yearly,25000
trainers.txt

Stores trainer information:
201,Hamza Malik,30,Weight Training,50000
Learning Outcomes

After completing this project, students will be able to:

Apply Object-Oriented Programming concepts in C++.
Implement inheritance and polymorphism in real applications.
Design abstract classes and derived classes.
Work with constructors and destructors.
Read and write data using file handling.
Organize large projects using multiple source and header files.
Build a simple management system using professional coding practices.
Future Enhancements

The project can be further improved by adding:

Search Member functionality
Update Member information
Delete Member records
Membership packages and renewal system
Payment management and billing system
Attendance management
Report generation
Graphical User Interface (GUI)
Database integration using MySQL
