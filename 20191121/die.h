// file: die.h
// --------------------
// a class to represent a single die

#ifndef DIE_H
#define DIE_H

using namespace std;


class Die { 
	public:
		Die(int sides = 6);	// constructor

		void roll();
		int getSides();
		int getValue();
	private:
		int sides;
		int currentValue; 
};
#endif

