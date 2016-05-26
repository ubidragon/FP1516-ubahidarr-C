/*
 *
 *centro.c
 *
 *Author: Ubidragon
 *
 */

#include "espacio.h"
#include "logico.h"
#include "cadena.h"
#include "centro.h"

int inicializaCentro(PCentro res, const Cadena nombre, const Cadena direccion,
		int numeroPlantas, int numeroSotanos, const ArrayEspacios espacios,
		int numEspacios) {
	if (!checkNumeroSotanos(numeroSotanos)) {
		printf("Error en ele numero de sotanos: %d\n", numeroSotanos);
		return -1;
	}
	if (!checkNumeroPlantas(numeroPlantas)) {
		printf("Error en ele numero de Plantas: %d\n", numeroPlantas);
		return -1;
	}

	strcpy(res->nombre, nombre);
	strcpy(res->direccion, direccion);
	res->numeroPlantas, numeroPlantas;
	res->numeroSotanos, numeroSotanos;
	copiaArray(res->espacios, espacios, numEspacios);
	res->numEspacios, numEspacios;

	return 0;
}

void copiaArray(ArrayEspacios destino, const ArrayEspacios origen, int numElem) {

	int i;

	for (i = 0; i < numElem; i++) {
		checkCapacidad(origen[i].capacidad);
		destino[i] = origen[i];

	}

}

Logico checkNumeroPlantas(int numeroPlantas) {

	Logico res = CIERTO;

	if (numeroPlantas < 0) {
		res = FALSO;
	}

	return res;
}

Logico checkNumeroSotanos(int numeroSotanos) {

	Logico res = CIERTO;

	if (numeroSotanos < 0) {
		res = FALSO;
	}

	return res;

}

void muestraCentro(Centro c) {

	printf("Nombre: %s\n", c.nombre);
	printf("Direccion: %s\n", c.direccion);
	printf("Numero de Plantas: %d\n", c.numeroPlantas);
	printf("Numero de Sotanos:%d\n", c.numeroSotanos);
	printf("Espacios: \n");
	muestraEspacios(c.espacios, c.numEspacios);
}

