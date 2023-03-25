#include "Person.h"

Person::Person()				// this constructer with no paramters is used when we created array of customer or mechanic object
								// we used the binary scope operator to initialize our private attributes
{
	name = "";
	id = 0;
	age = 0;
}

Person::Person(string n, int i, int a)			// this constructer passes the name,id and age and places the value of this variables in the private attributes
{
	name = n;
	id = i;
	age = a;
}

void Person::setName(std::string nme)			// setter where it takes a string variable and place it into the private attribute name
{
	name = nme;
}

void Person::setId(int i)					// setter where it takes a int variable and place it into the private attribute id
{
	id = i;
}

void Person::setAge(int a)				// setter where it takes a int variable and place it into the private attribute age
{
	age = a;
}


string Person::GetName()				//getter where it return the private attribute name
{
	return name;

}

int Person::GetID()				//getter where it return the private attribute id
{
	return id;

}

int Person::GetAge()			//getter where it return the private attribute age
{
	return age;
}


