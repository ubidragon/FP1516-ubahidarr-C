/*
 * espacio.h
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#ifndef INCLUDES_ESPACIO_H_
#define INCLUDES_ESPACIO_H_

#include <stdio.h>
#include <string.h>
#include "logico.h"
#include "cadena.h"

#define MAX 200

typedef struct {
	Cadena nombre;
	int planta;
	int capacidad;
} Espacio;

typedef Espacio *PEspacio;
typedef Espacio ArrayEspacios[MAX];

int inicializaEspacio(PEspacio res, const Cadena nombre, int planta,
		int capacidad);
void muestraEspacio(Espacio e);
void muestraEspacios(const ArrayEspacios res, int nEspacios);
int leeEspaciosFichero(const Cadena nombreFichero, ArrayEspacios res);
void leeEspacioFichero(FILE *f, PEspacio e);

Logico checkCapacidad(int capacidad);

#endif /* INCLUDES_ESPACIO_H_ */
