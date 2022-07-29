#ifndef TABLE_H
#define TABLE_H
//-----------------------------------------------------------
// Purpose: Header file for the Table class.
//          This class is designed to store an array of Person
//          objects that describe a group of famous people.
//          The search methods locate and print information
//          about a specified subset of the famous people.
// Author:  Andrew Murphy
//-----------------------------------------------------------
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
   // Constructor methods
   Table();
   Table(const Table & table);
   ~Table();
   Person *Next;
   // Input output methods
   void writeFile();
   void readFile();
   void searchBirth(int birth_year);
   void searchFirst(string first_name);
   void Print();
   
   void insertPerson(string first_name, string last_name, int birth_year, int death_year, string contribution);
   bool deletePerson(string first_name, string last_name);
   void sortedInsert(string first_name, string last_name, int birth_year, int death_year, string contribution);
 
private:
   int count = 0;
   Person *Head;
   
};
#endif