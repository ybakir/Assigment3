#include "Workshop.h"   // this workshop file contains the header files of all the class to be able to easily implement all the classes properly 
#include <fstream>		// this library is used to create,reaad,write files which we are gonna use to store the mechanics data and the customers data of the appointment
#include <cstdlib>		// used for the srand and rand function
#include <ctime>		// the time library is used to randomly generate unique numbers for the mechanic id
#include <iostream>
using namespace std;


int main()
{
	cout << "------Welcome to the Car Workshop-----" << endl; 

	srand(0);

	int mid[3];

	for (int x = 0; x < 3; x++)
	{
		mid[x] = rand();
	}

	Mechanic m[3];

	m[0].setName("Ahmed");
	m[0].setAge(40);
	m[0].setId(mid[0]);
	m[1].setName("Mohammed");
	m[1].setAge(43);
	m[1].setId(mid[1]);
	m[2].setName("Karrem");
	m[2].setAge(39);
	m[2].setId(mid[2]);

	customer c[4];
	
	c[0].setName("Youssef");
	c[0].SetApt(12, 45);
	c[1].setName("John");
	c[1].SetApt(13,05);
	c[2].setName("Mohamed");
	c[2].SetApt(14, 00);
	c[3].setName("Omar");
	c[3].SetApt(8, 25);

	m[0].setMaxsize(3);
	
	queue<customer> qt;
	
	ofstream mechfile("mech.txt");

	

	for (int x = 0; x < 3; x++)
	{

		if (m[x].isAvaliable(c[x].getApt()))
		{
			m[x].SetApt(c[x].getApt(), x);
			cout << "test 1" << endl;
		}
		else
		{
			cout << "test 2" << endl;
		}
	}


	for (int x = 0; x < 3; x++)
	{

		if (c[x] > c[x + 1])
		{

			qt.Enqueue(c[x + 1]);
			c[x].SetMechanicID(mid[x]);
			m[x].setId(mid[x]);

		}
		else if (c[x] < c[x + 1])
		{
			qt.Enqueue(c[x]);
			c[x].SetMechanicID(mid[x]);
			m[x].setId(mid[x]);


		}
		else if (c[x] = c[x + 1])
		{
			qt.Enqueue(c[x]);
			c[x].SetMechanicID(mid[x]);
			m[x].setId(mid[x]);


		}
	}
	

	for (int a = 0; a < 3; a++)
	{
		mechfile << m[a].GetName() <<" mechanic name "<<endl;
		mechfile<<m[a].GetID() << " ID "<<endl;
		mechfile << m[a].GetCounter() << "number of appointments" << endl;
		mechfile << c[a].GetName() << " customers name " << endl;
		mechfile << "appotiment " << c[a].Getcounter() << " at" << c[a].getApt().hours << " : " << c[a].getApt().min << endl;

	}

	mechfile.close();

	for (int i = 0; i < 3; i++)
	{
		cout << c[i].GetName() << " has booked mechanic " << m[i].GetName() << " at time " << c[i].getApt().hours << " : " << c[i].getApt().min << endl;
	}
	






}


	







	
