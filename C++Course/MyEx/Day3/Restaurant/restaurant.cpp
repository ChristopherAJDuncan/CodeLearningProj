/* Class definition and methods for restaurant class */
#include "restaurant.h"
#include <iostream>
using namespace std;

/*Constructor - set up to initialise, addTable will do the hard work*/
Restaurant::Restaurant(){
}
Restaurant::Restaurant(vector<Table *> toAdd){
	this->addNTable(toAdd);
}

void Restaurant::addTable(Table * toAdd){
	// Adds a single table to the restaurant
	tables.push_back(toAdd);	
}
	
void Restaurant::addNTable(vector<Table *> toAdd){
	//Using iterator
	vector<Table *>::iterator iter; //iter is a pointer to vector location
	for (iter = toAdd.begin(); iter != toAdd.end(); iter++){
		this->addTable(*iter);
	}
	/*
	for (int n=0; n<toAdd.size(); n++){
		this->addTable(toAdd[n]);
	}
	*/
	//tables += toAdd;
}	

int Restaurant::getNumDiners(){
	int total = 0;
	cout << "Running getDiners, to size "<<this->tables.size() << endl;
	for (int n = 0; n<this->tables.size();n++){
		cout << "Number of diners is:"<< total << endl;
		total += tables[n]->getNumberOfSeats();
	}
	return total;
}