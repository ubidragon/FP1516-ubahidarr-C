/*
 * testCentro.c
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#include "centro.h"
#include "cadena.h"
#include <stdio.h>

void testInicializaEspacio();
void testInicializaEspacio2();
void testInicializaEspacio3();

int main(void) {

	void testInicializaEspacio();
	void testInicializaEspacio2();
	void testInicializaEspacio3();
	return 0;

}

void testInicializaEspacio() {

	printf("Inicializar centro con plantas menores a 1 \n");

	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;

	c.numeroPlantas = 0;
	c.numeroSotanos = 2;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);

	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos,
			espacios, c.numEspacios);
	if (res == -1) {
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}

}

void testInicializaEspacio2() {

	printf("Inicializar centro con sotanos menores a 0\n");

	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;

	c.numeroPlantas = 4;
	c.numeroSotanos = -1;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);

	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos,
			espacios, c.numEspacios);
	if (res == -1) {
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}

}

void testInicializaEspacio3() {

	printf("Inicializar centro correcto \n");

	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;

	c.numeroPlantas = 4;
	c.numeroSotanos = 2;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);

	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos,
			espacios, c.numEspacios);

	if (res == -1) {
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}

}
