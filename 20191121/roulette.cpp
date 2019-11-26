/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   roulette.cpp                                __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/11/21 11:34:06 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/11/21 12:18:12 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;


// constructor
Roulette::Roulette(int sides){
	this->sides = sides;
}

// mutator (or setter)
void Roulette::spin(){
	const int MIN = 1;
	currentValue = (rand () % (sides - MIN + 1)) + MIN;
}


// accessors (or getters)
int Roulette::getValue(){
	return currentValue;
}
int Roulette::getSides(){
	return sides;
} 

void printResults(int results[], int totalSides){
	for (int i = 0; i < totalSides; i++){
		cout << i + 1 << ": " << results[i] << endl;
	}
}


int main(){
	const int TOTAL_SPINS = 10000;
	const int TOTAL_SLOTS = 37;
	srand(time(NULL));

	Roulette wheelOne;
	Roulette wheelTwo;

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

