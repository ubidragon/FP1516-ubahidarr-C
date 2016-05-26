/*
 * testAsignatura.c
 *
 *  Created on: 28/5/2015
 *      Author: Rolic
 */

#include "asignatura.h"
#include "cadena.h"

void testLeeAsignaturasFichero(const Cadena nombreFichero);
void testInicializaAsignatura1();
void testInicializaAsignatura2();
void testInicializaAsignatura3();
void testInicializaAsignatura4();
void testLeeAsignaturasTeclado();
void testGetAcronimo();

int main(void) {
    testLeeAsignaturasFichero("./res/asignaturas.txt");
    testInicializaAsignatura1();
    testInicializaAsignatura2();
    testInicializaAsignatura3();
    testInicializaAsignatura4();
    testLeeAsignaturasTeclado();
    testGetAcronimo();

    return 0;
}

void testLeeAsignaturasFichero(const Cadena nombreFichero) {
    printf("Testear Lee Fichero\n");
    ArrayAsignaturas asignaturas;
    int nAsig;

    nAsig = leeAsignaturasFichero(nombreFichero, asignaturas);
    muestraAsignaturas(asignaturas, nAsig);
}

void testInicializaAsignatura1() {
    printf("Testeando inicializa asignatura 1 con codigo largo: \n");
    Asignatura a1;

    int res = inicializaAsignatura(&a1, "Fundamentos de Programacion", "12345678", 12.0, ANUAL, 1, "LSI");

    if (res == -1) {
    	printf("Problema con la inicializacion\n");
	} else {
		printf("Asignatura inicializada correctamente\n");
		muestraAsignatura(a1);
	}
}

void testLeeAsignaturasTeclado() {
    printf("Testear Asignatura teclado: \n");
    ArrayAsignaturas asignaturas;
    int nAsig;

    nAsig = leeAsignaturasTeclado(asignaturas);
    muestraAsignaturas(asignaturas, nAsig);
}

void testInicializaAsignatura2() {
    printf("Testeando inicializa asignatura 2 creditos negativos: \n");
    Asignatura a1;

    int res = inicializaAsignatura(&a1, "Fundamentos de Programacion","1234567", -12.0, ANUAL, 1, "LSI");

    if (res == -1) {
       	printf("Problema con la inicializacion\n");
   	} else {
   		printf("Asignatura inicializada correctamente\n");
   		muestraAsignatura(a1);
   	}
}

void testInicializaAsignatura3() {
    printf("Testeando inicializa asignatura 3 con curso fuera del intervalo: \n");
    Asignatura a1;

    int res = inicializaAsignatura(&a1, "Fundamentos de Programacion", "1234567", 12.0, ANUAL, 6, "LSI");

    if (res == -1) {
       	printf("Problema con la inicializacion\n");
   	} else {
   		printf("Asignatura inicializada correctamente\n");
   		muestraAsignatura(a1);
   	}
}

void testInicializaAsignatura4() {
    printf("Testeando inicializa asignatura 4 correcta: \n");
    Asignatura a1;

    int res = inicializaAsignatura(&a1, "Fundamentos de Programacion", "1234567", 12.0, ANUAL, 1, "LSI");

    if (res == -1) {
       	printf("Problema con la inicializacion\n");
   	} else {
   		printf("Asignatura inicializada correctamente\n");
   		muestraAsignatura(a1);
   	}
}

void testGetAcronimo() {
    printf("Testear getAcronimo: \n");
    Asignatura a;
    Cadena acronimo;

    strcpy(a.nombre, "Fundamentos de Programacion");
    getAcronimo(a, acronimo);
    printf("El acronimo de %s es %s\n", a.nombre, acronimo);
    fflush(stdout);
    strcpy(a.nombre, "Fundamentos De Programacion");
    getAcronimo(a, acronimo);
    printf("El acronimo de %s es %s\n", a.nombre, acronimo);
    fflush(stdout);
    strcpy(a.nombre, "fundamentos de programacioN");
    getAcronimo(a, acronimo);
    printf("El acronimo de %s es %s\n", a.nombre, acronimo);
    fflush(stdout);
    strcpy(a.nombre, "fundamentos de programacion");
    getAcronimo(a, acronimo);
    printf("El acronimo de %s es %s\n", a.nombre, acronimo);
    fflush(stdout);
}

