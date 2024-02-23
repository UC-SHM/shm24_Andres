/*
 * Complex.h
 *
 *  Created on: 22 feb 2024
 *      Author: Datsh
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	float real;		//Parte real del numero complejo
	float imag;		//Parte imaginaria del número real
public:
	Complex();
	Complex(float real1, float imag1);
	Complex(int real2, int imag2);
	virtual ~Complex();
	float mod();
	Complex operator+(const Complex &rhs);
	Complex operator*(const Complex &rhs);
	Complex &operator=(const Complex &rhs);
	void set(float real1, float imag1);
	void get(float &real1, float &imag1);	//& indica un alias, es como un puntero

	bool operator==(const Complex &rhs);
};

#endif /* COMPLEX_H_ */
