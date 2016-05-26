/*
 * centro.h
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#ifndef INCLUDES_CENTRO_H_
#define INCLUDES_CENTRO_H_

#include "espacio.h"
#include "tipoEspacio.h"
#include "logico.h"
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

int inicializaCentro(PCentro res, const Cadena nombre,
		const Cadena direccion, int numeroPlantas, int numeroSotanos,
		const ArrayEspacios espacios, int numEspacios);
void muestraCentro (Centro c);
void getConteosEspacios(const ArrayEspacios espacios, int nEspacios, ArrayInt c);
void copiaArray(ArrayEspacios destino, const ArrayEspacios origen, int numElem);

Logico checkNumeroSotanos(int numSotanos);
Logico checkNumeroPlantas(int numPlantas);

#endif /* INCLUDES_CENTRO_H_ */
