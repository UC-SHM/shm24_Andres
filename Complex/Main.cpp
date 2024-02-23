/*
 * Main.cpp
 *
 *  Created on: 16 feb 2024
 *      Author: Datsh
 */

#include "Complex.h"
#include <iostream>

#ifndef TEST
int main () {
	Complex a(1.1f,2.2f);
	std::cout << "complejo: " << a.mod();
}
#endif
