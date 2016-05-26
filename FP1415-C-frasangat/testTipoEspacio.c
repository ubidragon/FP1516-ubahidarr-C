/*
 * testTipoEspacio.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "tipoEspacio.h"
#include <stdio.h>

void testConvierteCadena(TipoEspacio tipo) {
	Cadena res;
	deTipoEspacioACadena(res, tipo);
	printf("Cadena a %d: %s\n", tipo, res);
}

void testTipoEspacioCadena(const Cadena cad) {
	TipoEspacio tipo;
	int res;

	res = deCadenaATipoEspacio(cad, &tipo);
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
	testConvierteCadena(TEORIA);
	testConvierteCadena(LABORATORIO);
    testConvierteCadena(SEMINARIO);
    testConvierteCadena(EXAMEN);
    testConvierteCadena(OTRO);

	printf("=================\n");
	printf("Test convertir a tipo:\n");
	testTipoEspacioCadena("TEORIA");
	testTipoEspacioCadena("LABORATORIO");
	testTipoEspacioCadena("SEMINARIO");
	testTipoEspacioCadena("EXAMEN");
	testTipoEspacioCadena("OTRO");
	testTipoEspacioCadena("ALEATORIO");

}
