/*
 * tipoAsignatura.c
 *
 *  Created on: 11/5/2015
 *      Author: Francisco
 */

#include "tipoAsignatura.h"

void deTipoAsignaturaACadena(Cadena res, TipoAsignatura tipo) {
	if(tipo == ANUAL) {
		strcpy(res, "ANUAL");
	} else if(tipo == PRIMER_CUATRIMESTRE) {
		strcpy(res, "PRIMER_CUATRIMESTRE");
	} else if(tipo == SEGUNDO_CUATRIMESTRE) {
		strcpy(res, "SEGUNDO_CUATRIMESTRE");
	}
}
int deCadenaATipoAsignatura(const Cadena tipo, TipoAsignatura *res) {
	if(strcmp(tipo, "ANUAL") == 0) {
		*res = ANUAL;
	} else if (strcmp(tipo, "PRIMER_CUATRIMESTRE") == 0) {
		*res = PRIMER_CUATRIMESTRE;
	} else if (strcmp(tipo, "SEGUNDO_CUATRIMESTRE") == 0) {
		*res = SEGUNDO_CUATRIMESTRE;
	}
	return -1;
}
