/*
 * asignatura.h
 *
 *  Created on: 15/5/2015
 *      Author: Francisco
 */

#ifndef INCLUDES_ASIGNATURA_H_
#define INCLUDES_ASIGNATURA_H_

#include "logico.h"
#include "tipoAsignatura.h"
#include <stdio.h>

#define CODIGOLONG 8
#define MAXASIG 100

typedef char TipoCodigo[CODIGOLONG];
typedef struct {
	Cadena nombre;
	TipoCodigo codigo;
	double creditos;
	TipoAsignatura tipo;
	int curso;
	Cadena departamento;
} Asignatura;
typedef Asignatura *PAsignatura;
typedef Asignatura ArrayAsignaturas[MAXASIG];

int inicializaAsignatura(PAsignatura res, const Cadena nombre, const TipoCodigo codigo,
		double creditos, TipoAsignatura tipo, int curso, const Cadena departamento);
void getAcronimo(Asignatura a, Cadena res);
int leeAsignaturaTeclado(PAsignatura res);
void muestraAsignatura(Asignatura a);
int leeAsignaturasTeclado(ArrayAsignaturas res);
void muestraAsignaturas(const ArrayAsignaturas res, int nAsig);
int leeAsignaturasFichero(const Cadena nombreFichero, ArrayAsignaturas res);
void leeAsignaturaFichero(FILE *f, PAsignatura a);

Logico checkCreditos(double Creditos);
Logico checkCurso(int curso);
Logico checkCodigo(const TipoCodigo Codigo);

#endif /* INCLUDES_ASIGNATURA_H_ */
