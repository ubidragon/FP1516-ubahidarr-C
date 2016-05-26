/*
 * asignatura.h
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#ifndef INCLUDES_ASIGNATURA_H_
#define INCLUDES_ASIGNATURA_H_

#include <string.h>
#include <stdio.h>
#include "logico.h"
#include "cadena.h"

#define MAXASIG 100
#define CODIGOLEN 8

typedef char Codigo[CODIGOLEN];
typedef struct {
	Cadena nombre;
	Codigo codigo;
	double creditos;
	int curso;
	Cadena departamento;
} Asignatura;
typedef Asignatura *PAsignatura;
typedef Asignatura ArrayAsignaturas[MAXASIG];
int inicializaAsignatura(PAsignatura res, const Cadena nombre,
		const Codigo codigo, double creditos, int curso,
		const Cadena departamento);
void muestraAsignatura(Asignatura a);
void muestraAsignaturas(const ArrayAsignaturas res, int nAsig);
/* Funciones auxiliares */
Logico checkCodigo(const Codigo codigo);
Logico checkCurso(int curso);
Logico checkCreditos(double creditos);

int leeAsignaturasFichero(const Cadena nombreFichero, ArrayAsignaturas res);

/* Funciones auxiliares */

void leeAsignaturaFichero(FILE *f, PAsignatura a);

#endif /* INCLUDES_ASIGNATURA_H_ */
