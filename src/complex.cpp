#include <complex.h>
#include <stdio.h>
#include <iostream>
#include <string>



complex::complex()
{
		//This constructor (the default constructor) creates a complex number with zero elements	
	x = y =0;
}

complex::complex(std::string str (a))	//This constructor tests if a single value is imaginary or real
{
	if(a[0]!='i') {x =std::stoi(a);}
	else {y=std::stoi(a);}
}
complex::complex(const complex& a) //This is the copy constructor: it takes a copies a complex number
{
	x = a.x;
	y = a.y;
}
complex::complex( std::string str1 (a),std::string str2 (b)) //This constructor tests which number is imaginary  and which is real and sets its as a complex number
{	
	if(a[0]!='i'&& b[0]=='i') {x =std::stoi(a);y=std::stoi(b);}
	if (a[0]=='i' && b[0]!='i' ) {y=std::stoi(a);x=std::stoi(b);}
	else 
		printf("invalid entry\n",);
}


complex& complex::add( std::string str  (n)) //add a single imaginary number or real number to a complex number
{
	if(n[0]!=i) {x = x+std::stoi(n);}
	else y=y+std::stoi(a);
	return *this;
}


complex& complex::add(complex& a) //adding two complex numbers together

{
	if(a[0]!='i') {x = a.x+std::stoi(x);y=a.y+std::stoi(y);}
	else y=a.y+std::stoi(x);x=a.x+std::stoi(y);

}



complex& complex::multiply(std::string str (n))  //Multiply the complex by a  single value either imaginary or real
{
	if (n[0]!='i')
	{x = x * std::stoi(n);
	y = y* std::stoi(n);}
	else
	{
		y=x*std::stoi(n);
		x=(-y)*std::stoi(n);
	}
	return *this;
}

/
complex& complex::multiply(complex& m)  //multiply two complex numbers
{
	x = std::stoi(x)* m.x - std::stoi(y) * m.y;
	y = std::stoi(x) * m.y + std::stoi(y) * m.x;
	return *this;
}


complex& complex::element(std::string str (s),std::string str (c)) //function to return and set the real and imaginary parts of the number
{
if (s[0]=!'i') {x=std::stoi(c); y=std::stoi(s); printf("The complex number is = %f %f\n",x,y); return *this;}
if (c[0]=!'i') {x=std::stoi(s); y=std::stoi(c);printf("The complex number is = %f %f\n",x,y); return *this;}
else printf("error for making a complex number \n"); return 0;//error checking
}




double complex::absolute(complex& m) // function to return the absolute value of complex number
{
int abs=0;
abs = sqrt ((m.x)^2+(m.y)^2);
return abs;

}

complex& complex::phase(complex& m) //function to return the phase angle of complex
{

int angle =0;
angle=arctan (m.y/m.x);
return angle;
}

//print complex number in for x+iy
void complex::print() // TO DO: a function to print out the matrix to the console.
{
if (y<0 && x>=0)
{
printf("%f -i%f\n",x,y); //if real is positive and imaginary number is negative
}
if(y=>0&& x>=0)
{
printf("%f +i%f\n",x,y); //if real is positive and imaginary number is positive
}
if(y<0&& x<0)
{
printf("-%f -i%f\n",x,y); //if real is negative and imaginary number is negative
}
if(y=>0&& x<0)
{
printf("-%f +i%f\n",x,y); //if real is negative and imaginary number is positive
}
else
	printf("incorrect value for complex number\n") //if incorrect value is added
}
