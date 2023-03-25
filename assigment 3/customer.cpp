#include "Customer.h"

#include <iostream>




customer::customer()						// customer constructur were we initialize our private attributes mechanicid and hours and min from the object of appointment 
{
	MechanicID = 0;
	a.hours = 0;
	a.min = 0;
}

customer::customer(string n, int i, int a):Person(n,i,a)               // customer constructur were we pass values to the Person constructer as they have private attributes we need so instead of repeated the same attributes we will call the person constructer and pass the mechanics name,id and age
{
	
}

int customer::c = 0;											// we initialize the private attribute counter as we made this private attribute static


int customer::Getcounter()									// this getter is used to return the private attribute counter
{
	c++;
	return c;
}


void customer::SetApt(int h, int m)					// this setter is used to take the passed variable and place it in private attribute object of the appointment 
{
	a.hours = h;
	a.min = m;
}


void customer::SetMechanicID(int m)				// this setter is used to take the passed variable and place it in  the private attribute mechanical id
{
	MechanicID = m;
}

int customer::GetMechanicID()						// this getter is used to return the private attribute mechanicid
{
	return MechanicID;
}

Person::appointment customer::getApt()				// this getter is used to return the private attribute appointment object
{
	return a;
}

bool customer::operator>(customer b)				// this is a overloading operator > function which passes a customer object to allow the user to comapre between two customers without peforming over the top functions to comapre them instead you take both objects and place them in a if statment to see if one is greater than the other 
{
	if (a.hours == b.getApt().hours)
	{
		return (a.min < b.getApt().min ? 1 : 0);
	}
	return (a.hours < b.getApt().hours ? 1 : 0);

}
	
 bool customer::operator<(customer b)						// this is a overloading operator < function which passes a customer object to allow the user to comapre between two customers without peforming over the top functions to comapre them instead you take both objects and place them in a if statment to see if one is greater than the other 
{
	 if (a.hours == b.getApt().hours ) 
	 {
		 return (a.min > b.getApt().min ? 1 : 0);
	 }
	 return (a.hours > b.getApt().hours ? 1 : 0);

}


 bool customer::operator=(customer b)							// this is a overloading operator = function which passes a customer object to allow the user to comapre between two customers without peforming over the top functions to comapre them instead you take both objects and place them in a if statment to see if one is greater than the other 
 {
	 if (a.hours == b.getApt().hours)
	 {
		 return (a.min == b.getApt().min ? 1 : 0);
	 }
	 return (a.hours == b.getApt().hours ? 1 : 0);

 }

void customer::print()										// this print function is used to print out the name and all necessary data for the customer object 
{
	cout << "name of the user : " << GetName() << endl;
	cout << "age of the user : " << GetAge() << endl;
	cout << "id of the user : " << GetID() << endl;

	
}



