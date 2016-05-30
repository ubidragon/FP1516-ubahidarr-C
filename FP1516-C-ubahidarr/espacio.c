/*
 * espacio.c
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */
#include <stdio.h>
#include <string.h>
#include "cadena.h"
#include "espacio.h"

int inicializaEspacio(PEspacio res, const Cadena nombre, int planta,
		int capacidad) {
	if (!checkCapacidad(capacidad)) {
		printf(stderr, "Error en la capacidad: %d\n", capacidad);
		return -1;
	}

	strcpy(res->nombre, nombre);
	res->planta = planta;
	res->capacidad = capacidad;

	return 0;

}

Logico checkCapacidad(int capacidad) {
	Logico res = CIERTO;

	if (capacidad <= 0) {
		res = FALSO;
	}

	return res;
}

void muestraEspacio(Espacio e) {

	printf("Nombre: %s\n", e.nombre);
	printf("Planta: %d\n", e.planta);
	printf("Capacidas: %d\n", e.capacidad);

}

void muestraEspacios(const ArrayEspacios res, int nEspacios) {
	int i;
	Espacio esp;

	for (i = 0; i < nEspacios; i++) {
		printf("Espacio n: %d\n", i + 1);
		muestraEspacio(res[i]);
	}

}

int leeEspaciosFichero(const Cadena nombreFichero, ArrayEspacios res) {
	FILE *f;
	int i = 0;
	int n;

	f = fopen(nombreFichero, "r");

	if (f == NULL) {
		printf("El fichero %f no existe", nombreFichero);
		n = 0;
	} else {
		leeEspacioFichero(f, &res[i]);
		while (!feof(f) && i < MAX - 1) {
			i++;
			leeEspacioFichero(f, &res[i]);
		}
		n = i + 1;
		fclose(f);
	}

	return n;

}

void leeEspacioFichero(FILE *f, PEspacio e) {

	char c;

	fgets(e->nombre, MAXCAR, f);
	quitaSaltoDeLinea(e->nombre);
	fscanf(f, "%d%c", &e->planta, &c);
	fscanf(f, "%d%c", &e->capacidad, &c);

}

