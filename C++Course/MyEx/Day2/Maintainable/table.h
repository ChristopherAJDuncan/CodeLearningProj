#define CLOTHDENSITY (180.)
#define CLOTHOVERLAP (10.)
#define PI (3.145)
#define FRONTLENGTH (850.) //in mm


#ifndef TABLE
class Table{
	public:
		float getClothWeight();
		int getNumberOfSeats();
		virtual float getClothArea() {};
		virtual float getCircumference() {};
		char staff[10];
	};
#define TABLE
#endif
