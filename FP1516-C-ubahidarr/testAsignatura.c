/*
 * TestAsignatura.c
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#include "asignatura.h"
#include "cadena.h"

void testLeeAsignaturasFichero(const Cadena nombreFichero);
void testInicializaAsignatura1();
void testInicializaAsignatura2();
void testInicializaAsignatura3();
void testInicializaAsignatura4();
void testInicializaAsignatura(const Cadena, const Codigo, double, int,
		const Cadena);

int main(void) {

	testLeeAsignaturasFichero("./res/asignaturas.txt");
	testInicializaAsignatura1();
	testInicializaAsignatura2();
	testInicializaAsignatura3();
	testInicializaAsignatura4();

	return 0;
}

void testLeeAsignaturasFichero(const Cadena nombreFichero) {
	printf("*** testLeeAsignaturasFichero ***\n");
	ArrayAsignaturas asignaturas;
	int nAsig;

	nAsig = leeAsignaturasFichero(nombreFichero, asignaturas);
	muestraAsignaturas(asignaturas, nAsig);
}

void testInicializaAsignatura1() {
	printf("*** testInicializaAsignatura1 ***\n");
	testInicializaAsignatura("Fundamentos de Programaci�n", "12345767", 12.0, 1,
			"LSI");
}

void testInicializaAsignatura2() {
	printf("*** testInicializaAsignatura2 ***\n");
	testInicializaAsignatura("Fundamentos de Programaci�n", "1234567", -1.0, 1,
			"LSI");
}

void testInicializaAsignatura3() {
	printf("*** testInicializaAsignatura3 ***\n");
	testInicializaAsignatura("Fundamentos de Programaci�n", "1234567", 12.0, 6,
			"LSI");
}

void testInicializaAsignatura4() {
	printf("*** testInicializaAsignatura4 ***\n");
	testInicializaAsignatura("Fundamentos de Programaci�n", "1234567", 12.0, 1,
			"LSI");
}

void testInicializaAsignatura(const Cadena nombre, const Codigo codigo,
		double creditos, int curso, const Cadena departamento) {
	Asignatura a1;

	int res = inicializaAsignatura(&a1, nombre, codigo, creditos, curso,
			departamento);

	if (res == -1) {
		printf("Hubo alg�n problema con la inicializaci�n.\n");
	} else {
		printf("Se inicializ� la asignatura correctamente.\n");
		muestraAsignatura(a1);
	}
}
