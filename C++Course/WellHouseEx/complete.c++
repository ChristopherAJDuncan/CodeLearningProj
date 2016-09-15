/* Here is my data ... info.txt

Bus	61
Bus	81
Coach	101
Bus	91
Bus	81
Coach	77

*/

#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

// ----------  Declarations 

class Transport{
	public:
		Transport(int);
		static Transport* factory(char *);
		virtual int getCapacity() {return 0;};
		int nSeats;
	};
class Bus: public Transport{
	public:
		Bus(int);
		int getCapacity();
	};
class Coach: public Transport{
	public:
		Coach(int);
		int getCapacity();
	};

// ----------  methods

Transport*  Transport::factory(char * source) {
	char *type = strtok(source,"\t");
	char *capacity = strtok(NULL,"\n");
	if (strcmp(type,"Coach")) {
		return new Bus(atoi(capacity));
	} else {
		return new Coach(atoi(capacity));
	}
};

Transport::Transport(int nSeats) { this->nSeats = nSeats; } 
Bus::Bus(int nSeats) : Transport(nSeats) { 
	// Anything else setting up a bus but not a Transport goes here
	} 
Coach::Coach(int nSeats) : Transport(nSeats) { } 


int Bus::getCapacity () {
	return nSeats + 6;
	}

int Coach::getCapacity () {
	return nSeats;
	}

// ----------  main program

int main() {
	vector<Transport *> options;
	char dataline[257];
	ifstream *datasource = new ifstream("info.txt");
	while (1) {
		datasource->getline(dataline,256);
		if (datasource->eof()) break;
		Transport * option = Transport::factory(dataline);
		options.push_back(option);
	}

	for (int k=0; k<options.size(); k++) {
		cout << options[k]->getCapacity() << endl ;
	}
}
		
