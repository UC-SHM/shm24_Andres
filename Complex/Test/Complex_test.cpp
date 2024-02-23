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

// Verifica modulo
	TEST(Complex, testMod) {
		Complex r;

		r.set(2, 2);

		ASSERT_EQ(r.mod(),sqrt(8));
	}

// Verifica suma
	TEST(Complex, testSuma) {
		Complex r, s;

		r.set(1, 1);
		s.set(2, 2);

		Complex resul = r + s;

		float a, b;
		resul.get(a, b);

		ASSERT_FLOAT_EQ(a, 3);
		ASSERT_FLOAT_EQ(b, 3);
	}

// Verifica multiplicacion
	TEST(Rectangle, testMult) {
		Complex r, s;

		r.set(1, 1);
		s.set(2, 2);

		Complex resul = r * s;

		float a, b;
		resul.get(a, b);

		ASSERT_FLOAT_EQ(a, 0);
		ASSERT_FLOAT_EQ(b, 4);
		}

