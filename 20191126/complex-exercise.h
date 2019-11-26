#ifndef COMPLEX_H
#define COMPLEX_H


class ComplexNumber{
	
	public:
	// constructors
	ComplexNumber();
	ComplexNumber(int realPart, int imaginaryPart);

	// accessor
	void print() const; 

	ComplexNumber multiply(const ComplexNumber &otherComplex) const;
	ComplexNumber add(ComplexNumber &otherComplex) const;
	ComplexNumber multiply(int otherNumber) const;
	ComplexNumber add(int otherNumber) const;
	
	// mutator
	void setComplex(int realPart, int imaginaryPart);

	private:
	int realPart;
	int imaginaryPart;
};

#endif
