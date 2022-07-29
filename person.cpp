#include "person.h"

Person::Person()
{
    First_Name = "";
    Last_Name = "";
    Birth_Year = 0;
    Death_Year = 0;
    Contribution = "";
    Next = NULL;
}

//----------------------------------------------
Person::Person(string first_name, string last_name, int birth_year, int death_year, string contribution)
{
    First_Name = first_name;
    Last_Name = last_name;
    Birth_Year = birth_year;
    Death_Year = death_year;
    Contribution = contribution;
    Next = NULL;
}

//----------------------------------------------
Person::~Person()
{
    
}

//----------------------------------------------
string Person::getFirstName()
{
    return First_Name;
}

//----------------------------------------------
string Person::getLastName()
{
    return Last_Name;
}

//----------------------------------------------
int Person::getBirthYear()
{
    return Birth_Year;
}

//----------------------------------------------
int Person::getDeathYear()
{
    return Death_Year;
}

//----------------------------------------------
string Person::getContribution()
{
    return Contribution;
}

//----------------------------------------------
Person *Person::getNext() const
{
   return Next;
}

//----------------------------------------------
void Person::setFirstName(string first_name)
{
    First_Name = first_name;
}

//----------------------------------------------
void Person::setLastName(string last_name)
{
    Last_Name = last_name;
}

//----------------------------------------------
void Person::setBirthYear(int birth_year)
{
     Birth_Year = birth_year;
}

//----------------------------------------------
void Person::setDeathYear(int death_year)
{
    Death_Year = death_year;
}

//----------------------------------------------
void Person::setContribution(string contribution)
{
    Contribution = contribution;
}

//----------------------------------------------
void Person::setNext(Person * next)
{
   Next = next;
}

//----------------------------------------------
void Person::print()
{
    cout << "First name:   " << First_Name << endl
         << "Last name:    " << Last_Name << endl
         << "Birth year:   " << Birth_Year << endl
         << "Death year:   " << Death_Year << endl
         << "Contribution: " << Contribution << endl;
}