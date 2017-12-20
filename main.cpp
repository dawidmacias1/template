#include <iostream>
#include <string> 
#include "employee.h"
#include "map_template.h"


using namespace std;

int main()
{
	typedef unsigned int ID; 						//Identification number of Employee
	map_template<ID,Employee> Database;					//Database of employees

	Database.Add(761028073,Employee("Jan Kowalski","salesman",28)); 	//Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	Database.Add(510212881,Employee("Adam Nowak","storekeeper",54)); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add(730505129,Employee("Anna Zaradna","secretary",32)); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << Database << endl;						//Print databese

	map_template<ID,Employee> NewDatabase(Database);			//Make a copy of database
	
	Employee* pE;
	pE = NewDatabase.Find(510212881);					//Find employee using its ID
	pE->position = "salesman";						//Modify the position of employee
	pE = NewDatabase.Find(761028073);					//Find employee using its ID
	pE->age = 29;	
        cout << NewDatabase << endl;							//Modify the age of employee

	Database = NewDatabase;							//Update original database
	
	//cout << Database << endl;						//Print original databese
}


