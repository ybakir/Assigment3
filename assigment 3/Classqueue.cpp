#include "Classqueue.h"

#include <iostream>

template<class t>		// each function implementation has a template function to allow any data type to be used in this class
queue<t>::queue()      // queue constructur were we initialize our private attributes front,rear,counter and max
{
	front = 0;
	rear = -1;
	counter = 0;
	maxsize = 10;
}



template<class t>

void queue<t>::Enqueue(t x)			// this enqueue function takes a variable of the desried datatype and is placed into the queue
{
	rear = (rear + 1) % maxsize;
	q[rear] = x;
	counter++;

}


template<class t>

int queue<t>::Dequeue()					// this dequeue function removes the last value in the queue by creating a variable inside the function and storing the value that needs to be deleted in that variable
{
	int x = q[front];
	front = (front + 1) % maxsize;
	counter--;

	return x;
	
}

