/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   complex-exercise.cpp                        __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/11/26 10:19:12 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/11/26 10:56:37 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include "complex-exercise.h"

#include <iostream>

using namespace std;


// constructors
ComplexNumber::ComplexNumber(){
	setComplex(0, 0);
}

ComplexNumber::ComplexNumber(int realPart, int imaginaryPart){
	setComplex(realPart, imaginaryPart);
}

// accessors
void ComplexNumber::print() const {
	cout << realPart;
    if (imaginaryPart < 0)
        cout << " -";
    else
        cout << " +";
    cout << imaginaryPart << "i" << endl;
    return;
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber &otherComplex) const{

    int newImaginary = this->imaginaryPart * otherComplex.imaginaryPart;
    int newReal = this->realPart * otherComplex.realPart;
    ComplexNumber   newObject = ComplexNumber(newReal, newImaginary);
    return newObject;
}

ComplexNumber ComplexNumber::add(ComplexNumber &otherComplex const){

    int newImaginary = this->imaginaryPart + otherComplex.imaginaryPart;
    int newReal = this->realPart + otherComplex.realPart;
    ComplexNumber   newObject = ComplexNumber(newReal, newImaginary);
    return newObject;
}

ComplexNumber ComplexNumber::multiply(int otherNumber) const{

    int newImaginary = this->imaginaryPart * otherNumber;
    int newReal = this->realPart * otherNumber;
    ComplexNumber   newObject = ComplexNumber(newReal, newImaginary);
    return newObject;
}

ComplexNumber ComplexNumber::add(int otherNumber) const{

    int newImaginary = this->imaginaryPart + otherNumber;
    int newReal = this->realPart + otherNumber;
    ComplexNumber   newObject = ComplexNumber(newReal, newImaginary);
    return newObject;
}

// this is the only mutator
void ComplexNumber::setComplex(int realPart, int imaginaryPart){
	this->realPart = realPart;
	this->imaginaryPart = imaginaryPart;

}

int         main(){

    ComplexNumber   zoop = ComplexNumber(2, 2);
    ComplexNumber   doot = ComplexNumber(2, 2);

    return 0;
}


