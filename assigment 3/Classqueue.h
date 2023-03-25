#ifndef CLASSQUEUE_H  // this command was used to check if the classqueue header file was defined so there wouldnt be any errors as this customer class is called frequently
#define CLASSQUEUE_H


template<class t>		// here we are using a template function to accomadate any data type for the queue class

class queue
{

private:					// i decided to make these attributes private as its better coding practice and they can easily altred through setters and getters in the public
	int front;
	int rear;
	int counter;
	int maxsize;		// all the private attributes are integers expect the array itself as in a queue struct we need a defined front and rear so it peforms like a regualr queue
	t q[10];

public:
	queue();			// the queue constructer which is used to create a object of the queue in the class 
	
	void Enqueue(t x);	// a enqueue function which is used to add values into the array 

	int Dequeue();		// a dequeue fuction which is used to delete the last value in the array

};


#endif
