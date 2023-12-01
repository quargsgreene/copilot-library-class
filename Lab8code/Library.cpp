//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>

using namespace std;
//implement class functions

Library::Library()
  {
    //constructor
  }

bool Library::addBook(string bookName)
  {
    //add the book named bookName to the library if not already existing and
    // if there is space in the library
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
      if (books[i] == "")
      {
        books[i] = bookName;
        count++;
        return true;
      }
    }
    return false;
  }

bool Library::removeBook(string bookName)
  {
    //remove the book bookName from the library if it exists
    for (int i = 0; i < 10; i++)
    {
      if (books[i] == bookName)
      {
        books[i] = "";
        return true;
      }
    }
    return false;
  }
void Library::print()
  {
    //print all books in library
    for (int i = 0; i < 10; i++)
    {
      cout << books[i] << endl;
    }

  }


