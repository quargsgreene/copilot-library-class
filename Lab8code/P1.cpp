//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>

using namespace std;


int main(){
    Library library;

    //ask for commands and execute
    // ask the user for a command
    // if the command is "a", ask for a book name and add it to the library
    // if the command is "r", ask for a book name and remove it from the library
    // if the command is "p", print all books in the library
    // if the command is "q", quit the program

    string command;
    string bookName;

    while (command != "q")
    {
      cout << "Enter a command: ";
      cin >> command;
      if (command == "a")
      {
        cout << "Enter a book name: ";
        cin >> bookName;
        library.addBook(bookName);
      }
      else if (command == "r")
      {
        cout << "Enter a book name: ";
        cin >> bookName;
        library.removeBook(bookName);
      }
      else if (command == "p")
      {
        library.print();
      }
      else if (command == "q")
      {
        cout << "Goodbye!" << endl;
      }
      else
      {
        cout << "Invalid command" << endl;
      }
    }



}
