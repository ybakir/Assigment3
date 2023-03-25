#ifndef MECHANIC_H
#define MECHANIC_H  // this command was used to check if the customer header file was defined so there wouldnt be any errors as this customer class is called frequently


#include "Person.h"  // called both the Person header file as we inherit the Person class


class Mechanic : public Person {  
private:                        // i decided to make these attributes private as its better coding practice and they can easily altred through setters and getters in the public   
    static int counter;
    int maxsize;
    appointment* apt;           // this variable is a object of appointment class which creates a array of appointment to easly store and track the appointments from customers
   

public:

    Mechanic();          // this constructer with no paramters is used when we created array of mechanics in the main

    Mechanic(string n,int id);  // this constructer with parameters could be used if we are creating indivudal mechanics instead of a array of mechanics

    void SetApt(appointment a,int i);			// setter for the hour and min in the appointment struct, it passes hour int value and min int value through the function and i which paces the index of the array of appointments
	
    bool isAvaliable(appointment a); // this is a function which takes the appointment of customer and checks with the mechanic whether the mechanic has a any timeslot which is the same to check the mechanic is avaliable

    void setMaxsize(int m);  // setter for the maxsize attribute

    void SetCounter(int c); // setter for the counter attribute

    static int GetCounter();    // getter for the counter attirubte
    
    int GetMaxsize();           // getter for the maxsize attribute

    virtual void print();       // this is print function from the person class being overiden to accomedate every class that inherits from the Person class
};


#endif