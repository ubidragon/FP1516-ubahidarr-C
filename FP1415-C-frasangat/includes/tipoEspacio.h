/*
 * tipoEspacio.h
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#ifndef INCLUDES_TIPOESPACIO_H_
#define INCLUDES_TIPOESPACIO_H_

#include "cadena.h"

typedef enum {TEORIA, LABORATORIO, SEMINARIO, EXAMEN, OTRO} TipoEspacio;

void deTipoEspacioACadena(Cadena res, TipoEspacio tipo);
int deCadenaATipoEspacio(const Cadena tipo, TipoEspacio *res);


#endif /* INCLUDES_TIPOESPACIO_H_ */
