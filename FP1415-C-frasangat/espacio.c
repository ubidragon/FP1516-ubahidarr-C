/*
 * espacio.c
 *
 *  Created on: 21/5/2015
 *      Author: Rolic
 */

#include "espacio.h"
#include <string.h>
#include "cadena.h"
#include "tipoEspacio.h"

int inicializaEspacio(PEspacio res, const Cadena nombre, int planta, TipoEspacio tipo, int capacidad) {
	if(!checkCapacidad(capacidad)) {
		printf("Error en la capacidad: %d\n", capacidad);
		return -1;
	}

	strcpy(res -> nombre, nombre);
	res -> planta = planta;
	res -> tipo = tipo;
	res -> capacidad = capacidad;

	return 0;
}

Logico checkCapacidad(int capacidad) {
	Logico res = CIERTO;
	if(capacidad <= 0) {
		res = FALSO;
	}
	return res;
}

void muestraEspacio (Espacio e) {
	Cadena tipo;
	printf("Nombre: %s\n", e.nombre);
	printf("Planta: %d\n", e.planta);
	deTipoEspacioACadena(tipo, e.tipo);
	printf("Tipo: %s\n", tipo);
	printf("Capacidad: %d\n", e.capacidad);
}

void muestraEspacios(const ArrayEspacios res, int nEspacios) {
	int i;
	Espacio esp;
	for(i=0; i<nEspacios; i++) {
		printf("Espacio nº: %d\n", i + 1);
		muestraEspacio(res[i]);
	}
}

int leeEspaciosTeclado(ArrayEspacios res) {
	int n, i, error;
	char c;

	printf("Introduce número total de espacios: ");
    fflush(stdout);
    scanf("%d%c", &n, &c);

    while (n <= 0 || n > MAXESP) {
    	printf("Valor incorrecto. Introduce numero total de espacios: ");
		scanf("%d%c", &n, &c);
	}

    for (i = 0; i < n; i++) {
    	printf("Leyendo espacio número %d...\n", i + 1);
		fflush(stdout);
		error = leeEspacioTeclado(&res[i]);
		while (error == -1) {
			printf("Error, volviendo a leer espacio número %d...\n", i + 1);
			fflush(stdout);
			error = leeEspacioTeclado(&res[i]);
	    }
	}
    return n;
}

int leeEspacioTeclado(PEspacio res) {
	Cadena nombre, tipoCadena;
	int planta, capacidad;
	TipoEspacio tipo;

    printf("Introduce el nombre: ");
    fflush(stdout);
    gets(nombre);
    printf("Introduce la planta: ");
    fflush(stdout);
    scanf("%d", planta);
    printf("Introduce el tipo de Espacio (TEORIA, LABORATORIO, SEMINARIO, EXAMEN, OTRO) : ");
	fflush(stdout);
    gets(tipoCadena);
    printf("Introduce la capacidad: ");
    fflush(stdout);
    scanf("%d", capacidad);

    if (deCadenaATipoEspacio(tipoCadena, &tipo) == -1) {
    	return -1;
	}
	return inicializaEspacio(res, nombre, planta, tipo, capacidad);
}

int leeEspaciosFichero(const Cadena nombreFichero, ArrayEspacios res) {
	FILE *f;
	int i = 0;
	int n;

	f = fopen(nombreFichero, "r");

	if(f == NULL) {
		printf("El fichero %f no existe", nombreFichero);
		n = 0;
	} else {
		leeEspacioFichero(f, &res[i]);
		while(!feof(f) && i < MAXESP - 1) {
			i++;
			leeEspacioFichero(f, &res[i]);
		}
		n = i + 1;
		fclose(f);
	}
	return n;
}


void leeEspacioFichero(FILE *f, PEspacio p) {
	Cadena tipo;
	char c;

	fgets(p -> nombre, MAXCAR, f);
	quitaSaltoDeLinea(p -> nombre);
    fscanf(f, "%d%c", &p -> planta, &c);
	fgets(tipo, MAXCAR, f);
	quitaSaltoDeLinea(tipo);
    deCadenaATipoEspacio(tipo, &(p->tipo));
    fscanf(f, "%d%c", &p -> capacidad, &c);

}
