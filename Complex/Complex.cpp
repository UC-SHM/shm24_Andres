/*
 * Complex.cpp
 *
 *  Created on: 22 feb 2024
 *      Author: Datsh
 */

#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor con valores a cero
Complex::Complex() {
	// TODO Auto-generated constructor stub
	real = 0;
	imag = 0;
}

//Constructor si se dan valores float
Complex::Complex(float real1, float imag1) {
	real = real1;
	imag = imag1;
}

//Constructor con valores int
Complex::Complex(int real2, int imag2){
	real = (float)real2;
	imag = (float)imag2;
}

//Destructor
Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

//Modulo del numero complejo
float Complex::mod() {
	double real2, imag2;
	real2 = pow((double)real, 2);
	imag2 = pow((double)imag, 2);
	return (float)sqrt(real2 + imag2);
}

//Sobrecarga de +
Complex Complex::operator+(const Complex &rhs) {
	Complex result;

	result.real = real + rhs.real;
	result.imag = imag + rhs.imag;

	return result;
}

//Sobrecarga de *
Complex Complex::operator*(const Complex &rhs) {
	Complex result;

	result.real = real - rhs.real;
	result.imag = imag - rhs.imag;
	result.real = rhs.real*real - rhs.imag*imag;
	result.imag = rhs.real*imag + real*rhs.imag;

	return result;
}

//Sobrecarga de =
Complex &Complex::operator=(const Complex &rhs) {

	if(this == &rhs) {
		return *this;
	} else {
		real = rhs.real;
		imag = rhs.imag;

		return *this;
	}
}

//Set
void Complex::set(float real1, float imag1) {
	real = real1;
	imag = imag1;
}

//Get
void Complex::get(float &real1, float &imag1) {
	real1 = real;
	imag1 = imag;
}

//Sobrecarga de == para usarlo en los ASSERT_EQ al comprar numeros complejos
bool Complex::operator==(const Complex &rhs) {
	bool ret;

	if (real == rhs.real && imag == rhs.imag) {
		ret = true;
	} else {
		ret = false;
	}
}
