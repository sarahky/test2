#ifndef __COMPLEX_H
#define __COMPLEX_H
#include <stdlib.h>
/*
The complex class represents a complex number  with elements:
	|  x + or - iy  |
it contains member functions to add and multiply matrices. it can also find determinants and inverses.
*/
//store real and imaginary parts of the complex number as doubles
//function to return the absolute value of complex number
//function to return the phase angle of complex
//add two complex number
//multiply two complex numbers
//print complex number in for x+iy
//function to return and set the real and imaginary parts of the number



//couldn't figure out how to parse the string
class complex
{
	double x; //the real part of the complex number
	double y; //the imaginary part of the complex number


public:

	complex(); //This constructor (the default constructor) creates a complex number with zero elements
	complex(std::string str (a)); //This constructor tests if a single value is imaginary or real
	complex(std::string str(a0),std::string str  (a1)); //This constructor tests which number is imaginary and which is real sets its as a complex number
	complex( complex&);//This is the copy constructor: it takes a copies a complex number

	complex& add( std::string str(n)); // adding a complex number by an imaginary number or a real number
	complex& add(complex& a); //adding two complex numbers together
	

	complex& multiply(std::string str(n));  // Multiply a complex number by an imaginary number or a real number
	complex& multiply(complex& m);  // mulitiply two complex numbers together

	complex& element( std::string str  (s), std::string str (c)); // set and return a complex number
	double absolute(complex& m); // return the absolute value of the complex number
	double complex& phase(complex& m); // return the phase angle

	void print(); //print out results for complex number

};
#endif



