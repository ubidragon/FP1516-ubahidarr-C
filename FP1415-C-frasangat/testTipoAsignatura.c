/*
 * testTipoAsignatura.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "tipoAsignatura.h"
#include <stdio.h>

void testConvierteCadena(TipoAsignatura tipo) {
	Cadena res;
	deTipoAsignaturaACadena(res, tipo);
	printf("Cadena a %d: %s\n", tipo, res);
}

void testTipoAsignaturaCadena(const Cadena cad) {
	TipoAsignatura tipo;
	int res;

	res = deCadenaATipoAsignatura(cad, &tipo);
	if(res == 0) {
		printf("Tipo %d, a cadena: %s\n", tipo, cad);
	} else {
		printf("Error al convertir cadena\n");
	}
}

int main(void) {
	printf("TESTEAR FUNCIONES\n");

	printf("=================\n");
	printf("Test convertir a cadena: \n");
	testConvierteCadena(ANUAL);
	testConvierteCadena(PRIMER_CUATRIMESTRE);
    testConvierteCadena(SEGUNDO_CUATRIMESTRE);

	printf("=================\n");
	printf("Test convertir a tipo:\n");
	testTipoAsignaturaCadena("ANUAL");
	testTipoAsignaturaCadena("PRIMER_CUATRIMESTRE");
	testTipoAsignaturaCadena("SEGUNDO_CUATRIMESTRE");
	testTipoAsignaturaCadena("OTRO ALEATORIO");

}
