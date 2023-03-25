#ifndef PERSON_H  
#define PERSON_H   // this command was used to check if the person header file was defined so there wouldnt be any errors as this person class is inherted in every other class

#include <iostream>
using namespace std;


class Person			// this is a abstract class which lays the foundation 
						// abstract class is a class which has atleast one pure virtual function
{
private:				// i decided to make these attributes private as its better coding practice and they can easily altred through setters and getters in the public
	string name;
	int id;				
	int age;

public:

	Person();								// this constructer with no paramters is used when we created array of customer or mechanic object 

	Person(string n, int i, int a);			// this constructer with parameters could be used if we are creating indivudal customer or mechanic by calling this constructer instead of a array of customer or mechanic by calling this constructer
		
	void setName(string nme);				// setter for the name attribute
	
	void setId(int i);						// setter for the id attribute

	void setAge(int ag);					// setter for age attribute 

	string GetName() ;						// getter for the name attribute
	
	int GetID()  ;							// getter for the id attribute 
		
	int GetAge() ;							// getter for the age attribute

	virtual void print() = 0;				// pure virtual to the print function 

	struct appointment						// this is a struct strucuture which is used to create a data type for the appoinment which contains the hour and the min
	{
		int hours;
		int min;

	};

};

#endif

