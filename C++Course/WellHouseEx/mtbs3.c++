#include <iostream>
using namespace std;

class Mtbs {
	public:
		Mtbs(float,char *); Mtbs(int,char *);
		Mtbs* addComponent(Mtbs*);
		float getFrequency();
		Mtbs operator+(Mtbs);
		void print(ostream *os);
	private:
		float value;
};

// Overload the << operator for streams like cout so they know what to do with
// at object of type Mtbs

ostream &operator<<(ostream &os, Mtbs &p);

// ABOVE HERE - Templates.  Below here - code -----------------------------

Mtbs::Mtbs(int owoften,char * wot) { value = (float)owoften; }
Mtbs::Mtbs(float owoften,char * wot) { value = owoften; }
float Mtbs::getFrequency() { return value; }

void Mtbs::print(ostream *os) 
	{ *os << "Hello"; 
	} 

ostream &operator<<(ostream &os, Mtbs &mt) {
	mt.print(&os);
	return os;
	}

Mtbs* Mtbs::addComponent(Mtbs *that) {
	float newvalue = 1.0 / ((1.0 / that->getFrequency()) + (1.0 / this->getFrequency()));
	return (new Mtbs(newvalue,"combo"));
	}

Mtbs Mtbs::operator+(Mtbs that) {
	float newvalue = 1.0 / ((1.0 / that.getFrequency()) + (1.0 / this->getFrequency()));
	return Mtbs(newvalue,"combo");
	}

int main() {
	Mtbs *factors[4];
	factors[0] = new Mtbs(4,"Fill with Beans"); factors[1] = new Mtbs(6,"Fill with Water");
	factors[2] = new Mtbs(7,"Empty drip tray"); factors[3] = new Mtbs(9,"Empty grounds");

	{ Mtbs *summer = factors[0];
		for (int i=1; i<4; i++) {
			summer = summer->addComponent(factors[i]); }
		cout << summer->getFrequency() << endl;
	}

	Mtbs *summer = factors[0];
	for (int i=1; i<4; i++) {
		*summer = *summer + *factors[i];
	}
	// cout << summer->getFrequency() << endl;
	cout << *summer << endl;
}



