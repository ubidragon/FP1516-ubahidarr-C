/*
 * grado.h
 *
 *  Created on: 18/5/2015
 *      Author: Rolic
 */

#ifndef INCLUDES_GRADO_H_
#define INCLUDES_GRADO_H_

#include "asignatura.h"
#include <stdio.h>

typedef struct {
	Cadena nombre;
	Cadena centro;
	ArrayAsignaturas obligatorias;
	int numObligatorias;
	ArrayAsignaturas optativas;
	int numOptativas;
	double minimoCreditosOptativas;
} Grado;

typedef Grado *PGrado;

int inicializaGrado(PGrado res, const Cadena nombre, const Cadena centro,
		const ArrayAsignaturas obligatorias, int numObligatorias,
		const ArrayAsignaturas optativas, int numOptativas,
		double minimoCreditosOptativas);
void muestraGrado(Grado g);
void copiaArray(ArrayAsignaturas destino, const ArrayAsignaturas origen, int numElem);

Logico checkCreditosMinimosOp(double minimoCreditosOptativas,
		const ArrayAsignaturas optativas, int numOptativas);
Logico checkCreditosOp(const ArrayAsignaturas optativas,  int numOptativas);

#endif /* INCLUDES_GRADO_H_ */
