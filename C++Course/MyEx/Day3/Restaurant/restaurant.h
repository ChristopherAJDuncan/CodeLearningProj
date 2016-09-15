/* Header file for vector class which contains multiple tables */
using namespace std;
#include "table.h"
#include <vector>

#ifndef REST
class Restaurant{ // No inheritance from table as not a form of tables, only a collection
	public:
		//Constructors - 
		Restaurant();
		Restaurant(vector<Table *>);
		
		//Manipulation methods
		void addTable(Table *);
		void addNTable(vector<Table *>);
		
		//Return methods
		//int getNumTables();
		int getNumDiners();
		
	private:
		vector<Table *> tables;

};
#define REST
#endif
