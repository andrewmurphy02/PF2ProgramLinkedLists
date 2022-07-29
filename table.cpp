#include "table.h"
#include <iostream>
#include <string>

//-----------------------------------------------------------
// Constructor
//-----------------------------------------------------------
Table::Table()
{
   Head = NULL;
}

Table::Table(const Table & table)
{
    Head = NULL;
}
//-----------------------------------------------------------
// Destructor
//-----------------------------------------------------------
Table::~Table()
{
}

//----------------------------------------------
void Table::insertPerson(string first_name, string last_name, int birth_year, int death_year, string contribution)
{
   // Insert new node
   Person *ptr = new Person(first_name, last_name, birth_year, death_year, contribution);
   ptr->setNext(Head);
   Head = ptr;
   ptr->print();
}

//----------------------------------------------
// Insert data in sorted order into linked list.
//----------------------------------------------
void Table::sortedInsert(string first_name, string last_name, int birth_year, int death_year, string contribution)
{
   // Walk list to insertion point
   Person *curr = Head;
   Person *prev = Head;
   while ((curr != NULL) && (curr->getBirthYear() > birth_year))
   {
      prev = curr;
      curr = curr->Next;
   }

   // Create new node
   Person *ptr = new Person(first_name, last_name, birth_year, death_year, contribution);
   ptr->Next = curr;

   // Insert node into list
   if (curr == Head)
      Head = ptr;
   else
      prev->Next = ptr;
}

//----------------------------------------------
// Delete data from linked list.
//----------------------------------------------
bool Table::deletePerson(string first_name, string last_name)
{
   // Walk list to deletion point
   Person *curr = Head;
   Person *prev = Head;
   while ((curr != NULL) && (curr->getFirstName() != first_name)&& (curr->getLastName() != last_name))
   {
      prev = curr;
      curr = curr->Next;
   }

   // Check if value was found
   if (curr == NULL)
      return false;

   // Delete node from list
   if (curr == Head)
      Head = curr->Next;
   else
      prev->Next = curr->Next;
   delete curr;
   return true;
}

//-----------------------------------------------------------
// Read book information from people.txt
//-----------------------------------------------------------
void Table::readFile()
{
    
    ifstream din;
  din.open ("people.txt");
  if (din.fail ())
    {
      cout << "Error";
    }
string First, Last, Info;
      int Birth, Death;
      
  while(!din.eof())
  {
      din >> First >> Last >> Birth >> Death;
      getline(din, Info);
      insertPerson(First, Last, Birth, Death, Info);
      count++;
  }
   // Close input file
   din.close();
}

//-----------------------------------------------------------
// Write information from people.txt
//-----------------------------------------------------------
void Table::writeFile()
{
   ofstream outputfile;    
   Person *ptr = Head;
   outputfile.open("out.txt");
   while (ptr != NULL)
   {
      outputfile << ptr ->getFirstName() << " " << ptr ->getLastName() << " " << ptr ->getBirthYear() << " " << ptr ->getLastName() << " " << ptr ->getContribution() << " " << endl;
      ptr = ptr->Next;
   }
   outputfile.close();
}

//----------------------------------------------
// Search for data in linked list.
//----------------------------------------------
void Table::searchFirst(string first_name)
{
   // Walk list to find node
   Person *ptr = Head;
   while (ptr != NULL) {
   if (ptr->getFirstName() == first_name){
       ptr->print();
   }
      ptr = ptr->Next;
      
   }
   
}

//----------------------------------------------
// Search for data in linked list.
//----------------------------------------------
void Table::searchBirth(int birth_year)
{
   // Walk list to find node
   Person *ptr = Head;
   while (ptr != NULL){
    if(ptr->getBirthYear() == birth_year){
        ptr->print();
    }
      ptr = ptr->Next;
   }
}

//----------------------------------------------
// Print data
//----------------------------------------------
void Table::Print()
{
   Person *ptr = Head;
   while (ptr != NULL)
   {
      cout << ptr ->getFirstName() << " " << ptr ->getLastName() << " " << ptr ->getBirthYear() << " " << ptr ->getLastName() << " " << ptr ->getContribution() << " " << endl;
      ptr = ptr->Next;
   }
}

