/*
 * espacio.h
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#ifndef INCLUDES_ESPACIO_H_
#define INCLUDES_ESPACIO_H_

#include <stdio.h>
#include "tipoEspacio.h"
#include "logico.h"

#define MAXESP 200

typedef struct {
	Cadena nombre;
	int planta;
	TipoEspacio tipo;
	int capacidad;
} Espacio;

typedef Espacio *PEspacio;
typedef Espacio ArrayEspacios[MAXESP];

int inicializaEspacio(PEspacio res, const Cadena nombre, int planta, TipoEspacio tipo, int capacidad);
void muestraEspacio (Espacio e);
void muestraEspacios(const ArrayEspacios res, int nEspacios);
int leeEspaciosTeclado(ArrayEspacios res);
int leeEspacioTeclado(PEspacio res);
int leeEspaciosFichero(const Cadena nombreFichero, ArrayEspacios res);
void leeEspacioFichero(FILE *f, PEspacio esp);
Logico checkCapacidad(int capacidad);

#endif /* INCLUDES_ESPACIO_H_ */
