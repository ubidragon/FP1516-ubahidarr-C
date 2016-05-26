/*
 * grado.c
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#include "grado.h"
#include "cadena.h"

int inicializaGrado(PGrado res, const Cadena nombre, const Cadena centro,
		const ArrayAsignaturas obligatorias, int numObligatorias,
		const ArrayAsignaturas optativas, int numOptativas, double minimoCreditosOptativas) {

	if(!checkCreditosMinimosOp(minimoCreditosOptativas, optativas, numOptativas)) {
		printf("Error en el minimo de creditos de las optativas: %lf\n", minimoCreditosOptativas);
		return -1;
	}
	if(!checkCreditosOp(optativas, numOptativas)) {
		printf("No todas las asignaturas optativas tienen los mismos creditos\n");
		return -1;
	}

	strcpy(res -> nombre, nombre);
	strcpy(res -> centro, centro);
	copiaArray(res-> obligatorias, obligatorias, numObligatorias);
	res -> numObligatorias, numObligatorias;
	copiaArray(res -> optativas, optativas, numOptativas);
	res -> numOptativas, numOptativas;
	res -> minimoCreditosOptativas, minimoCreditosOptativas;

	return 0;
}

void copiaArray(ArrayAsignaturas destino, const ArrayAsignaturas origen, int numElem) {
    int i;

    for(i = 0; i< numElem; i++){
    	destino[i] = origen [i];
    }
}

Logico checkCreditosMinimosOp(double minimoCreditosOptativas,
		const ArrayAsignaturas optativas, int numOptativas) {
	Logico res = CIERTO;
	int i;
	double creditosTotales = 0.0;
	for(i=0; i<numOptativas; i++) {
		creditosTotales += optativas[i].creditos;
	}
	if(creditosTotales < minimoCreditosOptativas) {
		res = FALSO;
	}
	return res;
}

Logico checkCreditosOp(const ArrayAsignaturas optativas,  int numOptativas) {
	Logico res = CIERTO;
	int i;
	for(i=0; i<numOptativas; i++) {
		if(optativas[i].creditos != optativas[0].creditos) {
			res = FALSO;
			break;
		}
	}
	return res;
}

void muestraGrado(Grado g) {
	printf("Nombre: %s\n", g.nombre);
	printf("Centro: %s\n", g.centro);
	printf("Mínimo créditos optativas: %lf\n", g.minimoCreditosOptativas);
	printf("Asignaturas obligatorias: \n");
	muestraAsignaturas(g.obligatorias, g.numObligatorias);
	printf("Asignaturas optativas: \n");
	muestraAsignaturas(g.optativas, g.numOptativas);
}
