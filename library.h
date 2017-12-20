#include <iostream>
#include <string> 

using namespace std;

class Library
{
public:
  string author;
  string title;
  string category;
  unsigned int pages;
  unsigned int year;

  Library(string Nauthor="", string Ntitle="", string Ncategory="", unsigned int Npages=0, unsigned int Nyear=0): 
  author(Nauthor), title(Ntitle), category(Ncategory), pages(Npages), year(Nyear){};
  ~Employee() {};

  friend ostream& operator << (ostream& o, const Library& lib)
  {
      o << "Author: " << lib.author << endl;
      o << "Title: " << lib.title << endl;
      o << "Category: " << lib.category << endl;
      o << "Pages: " << lib.pages << endl;
      o << "Year: " << lib.year << endl;
      return o;
  };
};

