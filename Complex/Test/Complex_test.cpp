/*
 * Complex_test.cpp
 *
 *  Created on: 22 feb 2024
 *      Author: Datsh
 */

#include "../Complex.h"

#include <gtest/gtest.h>	//Definiciones de Google Test
#include <gmock/gmock.h>	//Un mock es un elemento que emula algo que falta
#include <cmath>
#include <chrono>
#include <iostream>

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;


// Verifica modulo
	TEST(Complex, testMod) {
		Complex r;
		auto t0 = high_resolution_clock::now();
		float resultado = 2.82842708;
		r.set(2, 2);

		ASSERT_EQ(r.mod(), resultado); // se pone 2.82842708 porque sqrt(8) tiene bastante más precisión y da error

		duration<double, std::milli>t = high_resolution_clock::now() - t0;
		std::cout << "+ operation took " << t.count()*1000 << " us/n" << std::endl;
	}

// Verifica suma
	TEST(Complex, testSuma) {
		Complex r, s;
		auto t0 = high_resolution_clock::now();

		r.set(1, 1);
		s.set(2, 2);

		Complex resul = r + s;

		float a, b;
		resul.get(a, b);

		ASSERT_FLOAT_EQ(a, 3);
		ASSERT_FLOAT_EQ(b, 3);

		duration<double, std::milli>t = high_resolution_clock::now() - t0;
		std::cout << "+ operation took " << t.count()*1000 << " us/n" << std::endl;
	}

// Verifica multiplicacion
	TEST(Complex, testMult) {
		Complex r, s;
		auto t0 = high_resolution_clock::now();

		r.set(1, 1);
		s.set(2, 2);

		Complex resul = r * s;

		float a, b;
		resul.get(a, b);

		ASSERT_FLOAT_EQ(a, 0);
		ASSERT_FLOAT_EQ(b, 4);

		duration<double, std::milli>t = high_resolution_clock::now() - t0;
		std::cout << "+ operation took " << t.count()*1000 << " us/n" << std::endl;
		}

// Verifica constructores y sobrecarga de =
	TEST(Complex, testConst) {
		int a = 2;
		int b = 3;
		float x = 2.5;
		float y = 1.5;

		Complex intComp(a, b);
		Complex floatComp(x, y);
		Complex resulComp, resulComp2(1, 1);

		resulComp = intComp + floatComp;
		resulComp2 = resulComp2;

	}

