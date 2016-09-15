#include <iostream>
using namespace std;

class Mtbs {
	public:
		Mtbs(float,char *); Mtbs(int,char *);
		Mtbs* addComponent(Mtbs*);
		float getFrequency();
		Mtbs operator+(Mtbs);
	private:
		float value;
};

class Mt2: public Mtbs{
	};

Mtbs::Mtbs(int owoften,char * wot) { value = (float)owoften; }
Mtbs::Mtbs(float owoften,char * wot) { value = owoften; }
float Mtbs::getFrequency() { return value; }

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
	cout << summer->getFrequency() << endl;

	Mt2 *derived = (Mt2 *)summer;
}



