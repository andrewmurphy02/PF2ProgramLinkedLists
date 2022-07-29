#include "person.h"
#include "table.h"
using namespace std;

int main ()
{
  Table table;
  table.readFile();
  string command = "";
   while (command != "0")
   {
      // Read user command
      cout << "\nCommand options:\n";
      cout << "0) Quit\n";
      cout << "1) Search by first name\n";
      cout << "2) Search by birth year\n";
      cout << "3) Insert new person\n";
      cout << "4) Input new sorted person by birth year\n";
      cout << "5) Delete person\n";
      cout << "6) Print to file\n";
      cout << "7) Print all scientists\n";
      cout << "Enter command: ";
      cin >> command;

      // Search table based on first name
      if (command == "1")
      {
         string name = "";
         cout << "Enter first name: ";
         cin >> name;
         table.searchFirst(name);
      }
      
      // Search table based on birth year range
      else if (command == "2")
      {
         int number=0;
         cout << "Enter birth year: ";
         cin >> number;
         table.searchBirth(number);
      }
      
      // Insert new person
      else if (command == "3")
      {
        string firstName, lastName, Contribution;
        int birthYear, deathYear;
        cout << "Enter a first name you want to use: ";
        cin >> firstName;
        cout << "Enter a last name you want to use: ";
        cin >> lastName;
        cout << "Enter a birth year you want to use: ";
        cin >> birthYear;
        cout << "Enter a death year you want to use: ";
        cin >> deathYear;
        cout << "Enter a contribution you want to use: ";
        cin >> Contribution;
        cout << endl;
        table.insertPerson(firstName, lastName, birthYear, deathYear, Contribution);
      }
      
      // Insert new sorted person
      else if (command == "4")
      {
        string fn, ln, c;
        int by, dy;
        cout << "Enter a first name you want to use: ";
        cin >> fn;
        cout << "Enter a last name you want to use: ";
        cin >> ln;
        cout << "Enter a birth year you want to use: ";
        cin >> by;
        cout << "Enter a death year you want to use: ";
        cin >> dy;
        cout << "Enter a contribution you want to use: ";
        cin >> c;
        cout << endl;
        table.sortedInsert(fn, ln, by, dy, c);
      }
      
      // Delete person
      else if (command == "5")
      {
        string first, last;
        cout << "Enter a first name you want to remove: ";
        cin >> first;
        cout << "Enter a last name you want to remove: ";
        cin >> last;
        table.deletePerson(first, last);
      }
      
      // Print to file
      else if (command == "6")
      {
        table.writeFile(); 
      }
      
      // Print all scientists
      else if (command == "7")
      {
         table.Print();
      }
   }
  
  //table.Print();
  //table.searchFirst("Mark");
  //table.searchBirth(1930);
 
}