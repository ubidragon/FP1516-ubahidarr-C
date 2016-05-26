/*
 * centro.h
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#ifndef INCLUDES_CENTRO_H_
#define INCLUDES_CENTRO_H_

#include "espacio.h"
#include "cadena.h"

#define MAXINT 5

typedef struct {

	Cadena nombre;
	Cadena direccion;
	int numeroPlantas;
	int numeroSotanos;
	ArrayEspacios espacios;
	int numEspacios;

} Centro;

typedef Centro *PCentro;
typedef int ArrayInt[MAXINT];

int inicializaCentro(PCentro res, const Cadena nombre, const Cadena direccion,
		int numeroPlantas, int numeroSotanos, const ArrayEspacios espacios,
		int numEspacios);
void copiaArray(ArrayEspacios destino, const ArrayEspacios origen, int numElem);
void muestraCentro(Centro c);

Logico checkNumeroSotanos(int numeroSotanos);
Logico checkNumeroPlantas(int numeroPlantas);

#endif /* INCLUDES_CENTRO_H_ */
