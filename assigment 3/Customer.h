#ifndef CUSTOMER_H
#define CUSTOMER_H		// this command was used to check if the customer header file was defined so there wouldnt be any errors as this customer class is called frequently

#include "Person.h"		
#include "Classqueue.h"		// called both these header files as we inherit the Person class and we are gonna use the queue class with the customer class


class customer:public Person
{
private:						// i decided to make these attributes private as its better coding practice and they can easily altred through setters and getters in the public
	int MechanicID;		
	appointment a;			// this a object of a 
	static int c;		// this c variable is used to count how many appointments are happening 
						// the variable c is static as were counting the amount of objects derived from this class 
public:

	customer();	// this constructer with no paramters is used when we created array of customers in the main

	customer(string n, int i, int a);		// this constructer with parameters could be used if we are creating indivudal customer instead of a array of customers
	
	void SetMechanicID(int m);				// setter for the mechanical id 

	static int Getcounter();				// getter for the counter 

	void SetApt(int hr, int mn);			// setter for the hour and min in the appointment struct, it passes hour int value and min int value through the function
		
	int GetMechanicID();					// getter for the mechanical id
		
	appointment getApt();					// getter for the appointment values hour and min values 

	bool operator>(customer b);				// this is a overloading operator for '>' operator which allows us to use the operator to compare two customer objects to see which is smaller to push the eariler time first

	bool operator=(customer b);				// this is a overloading operator for '=' operator which allows us to use the operator to compare two customer objects to see whether they push the first or the second time 

	bool operator<(customer b);				// this is a overloading operator for '>' operator which allows us to use the operator to compare two customer objects to see which is greater to push the eariler time first

	virtual void print() ;					// this is print function from the person class being overiden to accomedate every class that inherits from the Person class
	
};
#endif 
