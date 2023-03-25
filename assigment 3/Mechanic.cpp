#include "Mechanic.h"

#include<iostream>
using namespace std;


Mechanic::Mechanic()
{										// mechanic constructur were we initialize our private attributes counter and maxsize 
	counter++;
	maxsize = 0;

}



Mechanic::Mechanic(string n,int i) 
{
	setName(n);
	maxsize++;										// mechanic constructur were we pass values and place them in our private attributes counter and maxsize 
	counter++;
	appointment* apt = new appointment[3];
}



int Mechanic::counter = 0;					// we initialize the counter because its a static data attribute

void Mechanic::SetApt(appointment a,int i)		// this setter takes the appointment values of the customer and stores it into the mechanics array once it checks if it is empty or not 
{
	apt[i].hours = a.hours;
	apt[i].min = a.min;
											
}


	
bool Mechanic::isAvaliable(appointment a)										// this bool functionn is used to check whether the mechanics array doesnt have any conflicting timeslots 
{
	for (int i = 0; i < 3; i++)
	{
		if (apt[i].hours == a.hours && apt[i].min == a.min)							// once this function is entered the code crashes 
																						// possible segment error could not be solved 
		{	
			return false ;
		}
	}
	return true;
	

}

void Mechanic::SetCounter(int c)
{														// this setter is used to take the passed variable and place it in  the private attribute counter
	counter = c;
}


void Mechanic::setMaxsize(int m)
{														// this setter is used to take the passed variable and place it in  the private attribute maxsize
	maxsize = m;
}


	
int Mechanic::GetMaxsize()								// this getter is used to return the private attribute maxsize
{
	return maxsize;
}



int Mechanic::GetCounter()								// this getter is used to return the private attribute counter
{
	return counter;
}






void Mechanic::print()								// this print function is used to print out the name and all necessary data for the mechanics 
{
	cout << GetName();
	cout << GetID();
	


}
