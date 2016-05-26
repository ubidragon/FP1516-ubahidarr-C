/*
 * testGrado.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "grado.h"
#include "cadena.h"
#include <stdio.h>

void testInicializaGrado1();
void testInicializaGrado2();
void testInicializaGrado3();

int main(void) {
	testInicializaGrado1();
	testInicializaGrado2();
	testInicializaGrado3();

	return 0;
}

void testInicializaGrado1() {
	printf("Inicializar grado 1 con demasiados creditos \n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;
	int res;
	int i;
	g.minimoCreditosOptativas = 120.0;

	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);
	for(i=0;i<g.numOptativas;i++) {
		optativas[i].creditos = 6.0;
	}
	res = inicializaGrado(&g, "test", "test", obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	if(res == -1){
		printf("Problema al crear el grado \n");
	} else {
		printf("Grado creado correctamente \n");
		muestraGrado(g);
    }
}

void testInicializaGrado2() {
	printf("Inicializar grado 2 con creditos distintos \n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;
	int res;
	g.minimoCreditosOptativas = 12.0;

	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);
	res = inicializaGrado(&g, "test", "test", obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	if(res == -1){
		printf("Problema al crear el grado \n");
	} else {
		printf("Grado creado correctamente \n");
		muestraGrado(g);
    }
}

void testInicializaGrado3() {
	printf("Inicializar grado 3 bien \n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;
	int res;
	int i;
	g.minimoCreditosOptativas = 12.0;

	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);
	for(i=0;i<g.numOptativas;i++) {
		optativas[i].creditos = 6.0;
	}
	res = inicializaGrado(&g, "test", "test", obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	if(res == -1){
		printf("Problema al crear el grado \n");
	} else {
		printf("Grado creado correctamente \n");
		muestraGrado(g);
    }
}
