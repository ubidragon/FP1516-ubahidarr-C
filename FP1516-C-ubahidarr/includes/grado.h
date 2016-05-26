/*
 * grado.h
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#ifndef INCLUDES_GRADO_H_
#define INCLUDES_GRADO_H_

#include "asignatura.h"

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
		ArrayAsignaturas const obligatorias, int numObligatorias,
		const ArrayAsignaturas optativas, int numOptativas,
		double minimoCreditosOptativas);
void muestraGrado(Grado g);
/* Funciones auxiliares */
Logico checkMinimoCreditosOptativas(double minimoCreditosOptativas,
		const ArrayAsignaturas optativas, int numOptativas);
Logico checkOptativasTodasIgualesCreditos(const ArrayAsignaturas optativas,
		int numOptativas);
double sumaCreditos(const ArrayAsignaturas optativas, int numOptativas);
void copiaArray(ArrayAsignaturas destino, const ArrayAsignaturas origen,
		int numElem);

#endif /* INCLUDES_GRADO_H_ */
