/*
 * centro.c
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#include "centro.h"
#include "espacio.h"
#include "tipoEspacio.h"
#include "logico.h"
#include "cadena.h"

int inicializaCentro(PCentro res, const Cadena nombre,
		const Cadena direccion, int numeroPlantas, int numeroSotanos,
		const ArrayEspacios espacios, int numEspacios) {
	if(!checkNumeroSotanos(numeroSotanos)) {
		printf("Error en el numero de sotanos: %d\n", numeroSotanos);
		return -1;
	}
	if(!checkNumeroPlantas(numeroPlantas)) {
		printf("Error en el numero de plantas: %d\n", numeroPlantas);
		return -1;
	}

	strcpy(res -> nombre, nombre);
	strcpy(res -> direccion, direccion);
	res -> numeroPlantas, numeroPlantas;
	res -> numeroSotanos, numeroSotanos;
	copiaArray(res -> espacios, espacios, numEspacios);
	res -> numEspacios, numEspacios;

	return 0;
}

void copiaArray(ArrayEspacios destino, const ArrayEspacios origen, int numElem){
    int i;

    for(i = 0; i< numElem; i++){
    	checkCapacidad(origen[i].capacidad);
    	destino[i] = origen [i];
    }
}

Logico checkNumeroSotanos(int numSotanos) {
	Logico res = CIERTO;
	if(numSotanos<0) {
		res = FALSO;
	}
	return res;
}

Logico checkNumeroPlantas(int numPlantas) {
	Logico res = CIERTO;
	if(numPlantas<1) {
		res = FALSO;
	}
	return res;
}

void muestraCentro (Centro c) {
	printf("Nombre: %s\n", c.nombre);
	printf("Dirección: %s\n", c.direccion);
	printf("Número de plantas: %d\n", c.numeroPlantas);
	printf("Número de sotanos: %d\n", c.numeroSotanos);
	printf("Espacios: \n");
	muestraEspacios(c.espacios, c.numEspacios);
}

void getConteosEspacios(const ArrayEspacios espacios, int numEspacios, ArrayInt c) {
	int i;
	for(i=0; i<numEspacios; i++){
		if(espacios[i].tipo==TEORIA) {
			c[0]++;
		} else if(espacios[i].tipo==LABORATORIO) {
			c[1]++;
		} else if(espacios[i].tipo==SEMINARIO) {
			c[2]++;
		} else if(espacios[i].tipo==EXAMEN) {
			c[3]++;
		} else if(espacios[i].tipo==OTRO) {
			c[4]++;
		}
	}
}
