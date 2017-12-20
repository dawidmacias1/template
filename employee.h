#include <iostream>
#include <string> 

using namespace std;

class Employee
{
public:
  string name;
  string position;
  unsigned int age;

  Employee(string Nname="", string Nposition="", int Nage=0): name(Nname), position(Nposition), age(Nage){};
  ~Employee() {};

  friend ostream& operator << (ostream& o, const Employee& emp)
  {
      o << "Name: " << emp.name << endl;
      o << "Position: " << emp.position << endl;
      o << "Age: " << emp.age << endl;
      return o;
  };
};

