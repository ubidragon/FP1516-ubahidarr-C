/*
 * testEspacio.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "espacio.h"
#include "cadena.h"

void testLeeEspaciosFichero(const Cadena nombreFichero);
void testInicializaEspacio1();
void testInicializaEspacio2();
void testLeeEspaciosTeclado();

int main(void) {
	testLeeEspaciosFichero("./res/espacios.txt");
	testInicializaEspacio1();
	testInicializaEspacio2();
	testLeeEspaciosTeclado();

    return 0;
}

void testLeeEspaciosFichero(const Cadena nombreFichero) {
    printf("Testear Lee Fichero\n");
    ArrayEspacios espacios;
    int nEsp;

    nEsp = leeEspaciosFichero(nombreFichero, espacios);
    muestraEspacios(espacios, nEsp);
}

void testLeeEspaciosTeclado() {
    printf("Testear Espacio teclado: \n");
    ArrayEspacios espacios;
    int nEsp;

    nEsp = leeEspaciosTeclado(espacios);
    muestraEspacios(espacios, nEsp);
}

void testInicializaEspacio1() {
    printf("Testeando inicializa espacio 1 capacidad menos de 0: \n");
    Espacio esp1;

    int res = inicializaEspacio(&esp1, "A1.10", 1, EXAMEN, -1);

    if (res == -1) {
    	printf("Problema con la inicializacion\n");
	} else {
		printf("Espacio inicializado correctamente\n");
		muestraEspacio(esp1);
	}
}

void testInicializaEspacio2() {
    printf("Testeando inicializa espacio 2 correcto: \n");
    Espacio esp1;

    int res = inicializaEspacio(&esp1, "A1.10", 1, EXAMEN, 100);

    if (res == -1) {
    	printf("Problema con la inicializacion\n");
	} else {
		printf("Espacio inicializado correctamente\n");
		muestraEspacio(esp1);
	}
}
