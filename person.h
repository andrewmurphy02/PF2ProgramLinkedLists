#ifndef PERSON_H
#define PERSON_H
//-----------------------------------------------------------
// Purpose: Header file for the Person class.
//          This class is designed to store five pieces of 
//          information describing a famous person.  
// Author:  Andrew Murphy
//-----------------------------------------------------------
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // Constructor methods
    Person();
    Person(string first_name, string last_name, int birth_year, int death_year, string contribution);
    ~Person();
    void print();
    void read_file(string filename);
    Person *Next;
    // Get methods
    string getFirstName();
    string getLastName();
    int getBirthYear();
    int getDeathYear();
    string getContribution();
    Person *getNext() const;
    // Set methods
    void setFirstName(string first_name);
    void setLastName(string last_name);
    void setBirthYear(int birth_year);
    void setDeathYear(int death_year);
    void setContribution(string contribution);
    void setNext(Person * next);
private:
    // Object attributes
    string First_Name;
    string Last_Name;
    int Birth_Year;
    int Death_Year;
    string Contribution;
    int total;
    
};
#endif