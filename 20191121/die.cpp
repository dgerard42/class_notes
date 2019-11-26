#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;


// constructor
Die::Die(int sides){
	this->sides = sides;
}

// mutator (or setter)
void Die::roll(){
	const int MIN = 1;
	currentValue = (rand () % (sides - MIN + 1)) + MIN;
}


// accessors (or getters)
int Die::getValue(){
	return currentValue;
}
int Die::getSides(){
	return sides;
} 

void printResults(int results[], int totalSides){
	for (int i = 0; i < totalSides; i++){
		cout << i + 1 << ": " << results[i] << endl;
	}
}


int main(){
	const int TOTAL_ROLLS = 10000;
	const int TOTAL_SIDES = 12;
	srand(time(NULL));

	Die dieOne;
	Die dieTwo;

	int results[TOTAL_SIDES];
	for (int i = 0; i < totalSides; i++){
		results[i] = 0;
	}

	for (int roll = 0; roll < TOTAL_ROLLS; roll++){
		int currentRoll = 0;
		dieOne.roll();
		dieTwo.roll();
		currentRoll += dieOne.getValue();
		currentRoll += dieTwo.getValue();
		results[currentRoll - 1] += 1;
	}

	printResults(results, totalSides);

}

