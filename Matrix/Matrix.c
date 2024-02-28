/*
 * Programa que computa una multiplicación de matrices
 * Autor: Andrés Martínez Lozano
 */

#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 4
#define L 3

int main (){
	/*const int M = 6;
	const int N = 4;
	const int L = 3;*/


	// Para multiplicar matrices se multiplica cada valor de la fila de la primera por cada valor
	// de la columna de la segunda y luego se suma

	int b[M][N] = {0}; // inicialización a 0 de la matriz resultado
	int a[M][L];
	int x[L][N];

	//Inicializar las matrices
	for (int i=0; i<M ; i++) {
	//#pragma omp parallel for
		for (int j=0; j<N; j++) {
				a[M][L] = 1;
				x[L][N] = 1;
		}
	}

#pragma omp parallel for
	for (int i=0; i<M ; i++) {
//#pragma omp parallel for
		for (int j=0; j<N; j++) {
			for (int k=0; k<L; k++) {
				b[i][j] = b[i][j] + a[i][k] * x[k][j];				// EL valor de esa posicion de b es la suma recurrente del valor anterior de esa posicion y el producto de cada A*x
			}
			if (j == N-1) {
				printf("%d\n", b[i][j]);
			} else {
				printf("%d ", b[i][j]);
			}
		}
	}
	return 0;
}
