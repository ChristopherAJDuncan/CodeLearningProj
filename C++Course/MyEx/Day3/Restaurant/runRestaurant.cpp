using namespace std;
#include <vector>
#include <iostream>
#include "restaurant.h"
#include "table.h"
#include "squaretable.h"
#include "roundtable.h" //could add routines to specify by string etc, remove need to know about these classes


int main(){

	//Creat vector array of table pointers
	vector<Table *> sqTables;
	Restaurant Rest;
	
	//Set up tables
	for (int n = 0; n<10; n++){
		sqTables.push_back(new SquareTable(2000.,1300.,"Bill"));
	} 
	for (int n = 0; n<6; n++){
		sqTables.push_back(new SquareTable(1200.,"Bill"));
	}
	for (int n = 0; n<1; n++){	
		sqTables.push_back(new SquareTable(4000.,1000.,"Bill"));
	}

	//Add to restaurant
	Rest.addNTable(sqTables);


	cout << "Total number of diners is" << Rest.getNumDiners() << endl;

}
