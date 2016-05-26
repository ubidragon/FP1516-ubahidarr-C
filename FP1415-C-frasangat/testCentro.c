/*
 * testCentro.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "centro.h"
#include "cadena.h"
#include <stdio.h>

void testInicializaEspacio1();
void testInicializaEspacio2();
void testInicializaEspacio3();
void testConteoEspacios();

int main(void) {
	testConteoEspacios();
	testInicializaEspacio1();
	testInicializaEspacio2();
	testInicializaEspacio3();

	return 0;
}

void testConteoEspacios() {
	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);
	getConteosEspacios(espacios, c.numEspacios, i);
	printf("Muestra conteo primer tipo: %d\n", i[0]);
	printf("Muestra conteo segundo tipo: %d\n", i[1]);
	printf("Muestra conteo tercer tipo: %d\n", i[2]);
	printf("Muestra conteo cuarto tipo: %d\n", i[3]);
	printf("Muestra conteo quinto tipo: %d\n", i[4]);
	printf("FIN");
}

void testInicializaEspacio1() {
	printf("Inicializar centro 1 con plantas menores a 1 \n");
	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;
	c.numeroPlantas = 0;
	c.numeroSotanos = 2;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);
	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos, espacios, c.numEspacios);
	if(res == -1){
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}
}

void testInicializaEspacio2() {
	printf("Inicializar centro 2 con sotanos menores a 0 \n");
	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;
	c.numeroPlantas = 4;
	c.numeroSotanos = -1;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);
	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos, espacios, c.numEspacios);
	if(res == -1){
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}
}

void testInicializaEspacio3() {
	printf("Inicializar centro 3 correcto \n");
	ArrayEspacios espacios;
	ArrayInt i;
	Centro c;
	int res;
	c.numeroPlantas = 4;
	c.numeroSotanos = 2;
	c.numEspacios = leeEspaciosFichero("./res/espacios.txt", espacios);
	res = inicializaCentro(&c, "test", "test", c.numeroPlantas, c.numeroSotanos, espacios, c.numEspacios);
	if(res == -1){
		printf("Problema al crear el centro \n");
	} else {
		printf("Centro creado correctamente \n");
		muestraCentro(c);
	}
}
